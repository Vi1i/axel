//
// Created by Vi1i on 1/22/19.
//

#include "utils.hpp"
#include "advantage.hpp"
#include "disadvantage.hpp"

#include <set>

#include <yaml-cpp/yaml.h>
#include <iostream>

std::set<tde::advantage> tde::utils::parseAdvantages(std::string filename) {
    std::set<tde::advantage> advatages;
    YAML::Node file = YAML::LoadFile(filename);
    for(int record = 0; record < file["advantages"].size(); ++record) {
        auto name = file["advantages"][record]["name"].as<std::string>();
        auto description = file["advantages"][record]["description"].as<std::string>();
        auto rules = file["advantages"][record]["rules"].as<std::string>();
        auto range = file["advantages"][record]["range"].as<std::string>();
        auto actions = file["advantages"][record]["actions"].as<std::string>();
        auto prerequisites = file["advantages"][record]["prerequisites"].as<std::string>();
        auto ap_value = file["advantages"][record]["ap_value"].as<int>();
        advatages.insert(tde::advantage(name, description, rules, range, actions, prerequisites, ap_value));
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

std::set<tde::race> tde::utils::parseRaces(std::string filename, std::set<tde::advantage> advatages, std::set<tde::disadvantage> disadvantages) {
    std::set<tde::race> races;
    YAML::Node file = YAML::LoadFile(filename);
    for(int record = 0; record < file["races"].size(); ++record) {
        auto name = file["races"][record]["name"].as<std::string>();
        auto life_points = file["races"][record]["life_points"].as<int>();
        auto spirit = file["races"][record]["spirit"].as<int>();
        auto toughness = file["races"][record]["toughness"].as<int>();
        auto movement = file["races"][record]["movement"].as<int>();
        auto maximums = file["races"][record]["maximums"].as<std::string>();
        std::set<tde::advantage> advs;
        for(int adv_record = 0; adv_record < file["races"][record]["advantages"].size(); ++adv_record) {
            std::string adv_str(file["races"][record]["advantages"][adv_record]["name"].as<std::string>());
            for(auto const adv : advatages) {
                if(adv == adv_str) {
                    advs.insert(adv);
                }
            }
        }
        std::set<tde::disadvantage> diss;
        for(int dis_record = 0; dis_record < file["races"][record]["disadvantages"].size(); ++dis_record) {
            std::string dis_str(file["races"][record]["disadvantages"][dis_record]["name"].as<std::string>());
            for(auto const dis : disadvantages) {
                if(dis == dis_str) {
                    diss.insert(dis);
                }
            }
        }
        auto ap_cost = file["races"][record]["ap_cost"].as<int>();
        races.insert(tde::race(name, life_points, spirit, toughness, movement, maximums, advs, diss, ap_cost));
    }
    return races;
}