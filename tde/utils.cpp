//
// Created by Vi1i on 1/22/19.
//

#include "utils.hpp"
#include "advantage.hpp"
#include "disadvantage.hpp"
#include "skill.hpp"
#include "culture.hpp"

#include <set>
#include <vector>

#include <yaml-cpp/yaml.h>
#include <iostream>

std::vector<axel::tde::advantage> tde::utils::parseAdvantages(std::string filename) {
    std::vector<axel::tde::advantage> advatages;
    YAML::Node file = YAML::LoadFile(filename);
    for(int record = 0; record < file["advantages"].size(); ++record) {
        struct axel::tde::advantage::data datum;
        datum.name = file["advantages"][record]["name"].as<std::string>();
        datum.description = file["advantages"][record]["description"].as<std::string>();
        datum.rules = file["advantages"][record]["rules"].as<std::string>();
        datum.range = file["advantages"][record]["range"].as<std::string>();
        datum.actions = file["advantages"][record]["actions"].as<std::string>();
        datum.prerequisites = file["advantages"][record]["prerequisites"].as<std::string>();
        datum.ap_value = file["advantages"][record]["ap_value"].as<int>();
        advatages.push_back(axel::tde::advantage(datum));
    }
    return advatages;
}

std::set<tde::disadvantage> tde::utils::parseDisadvantages(std::string filename) {
    std::set<tde::disadvantage> disadvantages;
    YAML::Node file = YAML::LoadFile(filename);
    for(int record = 0; record < file["disadvantages"].size(); ++record) {
        auto name = file["disadvantages"][record]["name"].as<std::string>();
        auto description = file["disadvantages"][record]["description"].as<std::string>();
        auto rules = file["disadvantages"][record]["rules"].as<std::string>();
        auto range = file["disadvantages"][record]["range"].as<std::string>();
        auto actions = file["disadvantages"][record]["actions"].as<std::string>();
        auto prerequisites = file["disadvantages"][record]["prerequisites"].as<std::string>();
        auto ap_value = file["disadvantages"][record]["ap_value"].as<int>();
        disadvantages.insert(tde::disadvantage(name, description, rules, range, actions, prerequisites, ap_value));
    }
    return disadvantages;
}

std::set<tde::race> tde::utils::parseRaces(std::string filename, std::vector<axel::tde::advantage> advatages, std::set<tde::disadvantage> disadvantages) {
    std::set<tde::race> races;
    YAML::Node file = YAML::LoadFile(filename);

    for(int record = 0; record < file["races"].size(); ++record) {
        auto name = file["races"][record]["name"].as<std::string>();
        auto life_points = file["races"][record]["life_points"].as<int>();
        auto spirit = file["races"][record]["spirit"].as<int>();
        auto toughness = file["races"][record]["toughness"].as<int>();
        auto movement = file["races"][record]["movement"].as<int>();
        auto maximums = file["races"][record]["maximums"].as<std::string>();
        std::set<std::string> advs;
        for(int adv_record = 0; adv_record < file["races"][record]["advantages"].size(); ++adv_record) {
            auto adv_str(file["races"][record]["advantages"][adv_record]["name"].as<std::string>());
            advs.insert(adv_str);
        }
        std::set<std::string> diss;
        for(int dis_record = 0; dis_record < file["races"][record]["disadvantages"].size(); ++dis_record) {
            auto dis_str(file["races"][record]["disadvantages"][dis_record]["name"].as<std::string>());
            diss.insert(dis_str);
        }
        auto ap_cost = file["races"][record]["ap_cost"].as<int>();
        races.insert(tde::race(name, life_points, spirit, toughness, movement, maximums, advs, diss, ap_cost));
    }

    return races;
}

std::set<tde::skill> tde::utils::parseSkills(std::string filename) {
    std::set<tde::skill> skills;
    YAML::Node file = YAML::LoadFile(filename);

    for(int record = 0; record < file["races"].size(); ++record) {
        auto name = file["skills"][record]["name"].as<std::string>();
        auto t = file["skills"][record]["type"].as<std::string>();
        tde::skill::type type(tde::skill::getType(t));
        auto new_application = file["skills"][record]["new_application"].as<std::string>();
        auto uses = file["skills"][record]["uses"].as<std::string>();
        auto check = file["skills"][record]["check"].as<std::string>();
        auto description = file["skills"][record]["description"].as<std::string>();
        std::set<std::string> applications;
        for(int adv_record = 0; adv_record < file["races"][record]["applications"].size(); ++adv_record) {
            auto app_str(file["skills"][record]["applications"][adv_record]["name"].as<std::string>());
            applications.insert(app_str);
        }
        auto encumbrance = file["skills"][record]["encumbrance"].as<std::string>();
        auto tools = file["skills"][record]["tools"].as<std::string>();
        auto quality = file["skills"][record]["description"].as<std::string>();
        auto failed_check = file["skills"][record]["failed_check"].as<std::string>();
        auto critical_success = file["skills"][record]["critical_success"].as<std::string>();
        auto botch = file["skills"][record]["botch"].as<std::string>();
        auto improvement_cost = file["skills"][record]["improvement_cost"].as<std::string>();

        skills.insert(tde::skill(name, type, new_application, uses, check, description, applications, encumbrance, tools, quality, failed_check, critical_success, botch, improvement_cost));
    }

    return skills;
}

std::set<axel::tde::culture> tde::utils::parseCultures(std::string filename) {
    std::set<axel::tde::culture> cultures;
    YAML::Node file = YAML::LoadFile(filename);

    for(int record = 0; record < file["cultures"].size(); ++record) {
        axel::tde::culture::data datum;
        datum.name = file["cultures"][record]["name"].as<std::string>();
        datum.type = file["cultures"][record]["type"].as<std::string>();
        std::map<std::string, int> skills;
        for(int adv_record = 0; adv_record < file["races"][record]["skills"].size(); ++adv_record) {
            auto app_str(file["cultures"][record]["skills"][adv_record]["name"].as<std::string>());
            auto app_bonus(file["cultures"][record]["skills"][adv_record]["bonus"].as<int>());
            datum.package.insert(std::pair<std::string, int>(app_str, app_bonus));
        }
        datum.package_ap_cost = file["cultures"][record]["ap_cost"].as<int>();

        cultures.insert(axel::tde::culture(axel::tde::culture::));
    }


    return cultures;
}

int tde::utils::calcCharApCost(tde::utils::lookup lu, tde::character character) {
    int ap_cost = 0;

    for(auto const & race : lu.races) {
        if(race.getName() == character.getRace()) {
            ap_cost += race.getApCost();
            break;
        }
    }

    for(auto const & culture : lu.cultures) {
        if(culture.getName() == character.getCulture()) {
            ap_cost += culture.getApCost();
            break;
        }
    }
    return ap_cost;
}