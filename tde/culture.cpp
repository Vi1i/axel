//
// Created by Vi1i on 1/22/19.
//

#include "culture.hpp"

axel::tde::culture::culture(struct axel::tde::culture::data datum) :
                            name_(datum.name),
                            type_(datum.type),
                            language_(datum.language),
                            script_(datum.script),
                            area_knowledge_(datum.area_knowledge),
                            social_status_(datum.social_status),
                            common_professions_mudane_(datum.common_professions_mudane),
                            common_professions_magic_(datum.common_professions_magic),
                            common_professions_blessed_(datum.common_professions_blessed),
                            common_advantages_(datum.common_advantages),
                            common_disadvantages_(datum.common_disadvantages),
                            uncommon_advantages_(datum.uncommon_advantages),
                            uncommon_disadvantages_(datum.uncommon_disadvantages),
                            common_skills_(datum.common_skill),
                            uncommon_skills_(datum.uncommon_skill),
                            common_names_male_(datum.common_names_male),
                            common_names_female_(datum.common_names_female),
                            common_names_family_(datum.common_names_family),
                            common_names_noble_(datum.common_names_noble),
                            package_(datum.package),
                            package_ap_cost_(datum.package_ap_cost) {}

auto axel::tde::culture::getName() -> std::string {
    return name_;
}

auto axel::tde::culture::getType() -> std::string {
    return type_;
}

auto axel::tde::culture::getLanguage() -> std::string {
    return language_;
}

auto axel::tde::culture::getScript() -> std::string {
    return script_;
}

auto axel::tde::culture::getAreaKnowledge() -> std::string {
    return area_knowledge_;
}

auto axel::tde::culture::getSocialStatus() -> std::string {
    return social_status_;
}

auto axel::tde::culture::getCommonProfessionsMudane() -> std::vector<std::string> {
    return common_professions_mudane_;
}

auto axel::tde::culture::getCommonProfessionsMagic() -> std::vector<std::string> {
    return common_professions_magic_;
}

auto axel::tde::culture::getCommonProfessionsBlessed() -> std::vector<std::string> {
    return common_professions_blessed_;
}

auto axel::tde::culture::getCommonAdvantages() -> std::vector<std::string> {
    return common_advantages_;
}

auto axel::tde::culture::getCommonDisadvantages() -> std::vector<std::string> {
    return common_disadvantages_;
}

auto axel::tde::culture::getUncommonAdvantages() -> std::vector<std::string> {
    return uncommon_advantages_;
}

auto axel::tde::culture::getUncommonDisadvantages() -> std::vector<std::string> {
    return uncommon_disadvantages_;
}

auto axel::tde::culture::getCommonSkills() -> std::vector<std::string> {
    return common_skills_;
}

auto axel::tde::culture::getUncommonSkills() -> std::vector<std::string> {
    return uncommon_skills_;
}

auto axel::tde::culture::getCommonNamesMale() -> std::vector<std::string> {
    return common_names_male_;
}

auto axel::tde::culture::getCommonNamesFemale() -> std::vector<std::string> {
    return common_names_female_;
}

auto axel::tde::culture::getCommonNamesFamily() -> std::vector<std::string> {
    return common_names_family_;
}

auto axel::tde::culture::getCommonNamesNoble() -> std::vector<std::string> {
    return common_names_noble_;
}

auto axel::tde::culture::getPackage() -> std::map<std::string, int> {
    return package_;
}

auto axel::tde::culture::getPackageApCost() -> int {
    return package_ap_cost_;
}