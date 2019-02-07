//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_CULTURE_HPP
#define AXEL_TDE_CULTURE_HPP

#include <string>
#include <map>
#include <vector>

#include "skill.hpp"

namespace axel { namespace tde {
    class culture {
        std::string name_;
        std::string type_;
        std::string language_;
        std::string script_;
        std::string area_knowledge_;
        std::string social_status_;
        std::vector<std::string> common_professions_mudane_;
        std::vector<std::string> common_professions_magic_;
        std::vector<std::string> common_professions_blessed_;
        std::vector<std::string> common_advantages_;
        std::vector<std::string> common_disadvantages_;
        std::vector<std::string> uncommon_advantages_;
        std::vector<std::string> uncommon_disadvantages_;
        std::vector<std::string> common_skills_;
        std::vector<std::string> uncommon_skills_;
        std::vector<std::string> common_names_male_;
        std::vector<std::string> common_names_female_;
        std::vector<std::string> common_names_family_;
        std::vector<std::string> common_names_noble_;
        std::map<std::string, int> package_;
        int package_ap_cost_;

    public:
        struct data {
            std::string name;
            std::string type;
            std::string language;
            std::string script;
            std::string area_knowledge;
            std::string social_status;
            std::vector<std::string> common_professions_mudane;
            std::vector<std::string> common_professions_magic;
            std::vector<std::string> common_professions_blessed;
            std::vector<std::string> common_advantages;
            std::vector<std::string> common_disadvantages;
            std::vector<std::string> uncommon_advantages;
            std::vector<std::string> uncommon_disadvantages;
            std::vector<std::string> common_skill;
            std::vector<std::string> uncommon_skill;
            std::vector<std::string> common_names_male;
            std::vector<std::string> common_names_female;
            std::vector<std::string> common_names_family;
            std::vector<std::string> common_names_noble;
            std::map<std::string, int> package;
            int package_ap_cost;
        };

        culture(struct axel::tde::culture::data);
        auto getName() -> std::string;
        auto getType() -> std::string;
        auto getLanguage() -> std::string;
        auto getScript() -> std::string;
        auto getAreaKnowledge() -> std::string;
        auto getSocialStatus() -> std::string;
        auto getCommonProfessionsMudane() -> std::vector<std::string>;
        auto getCommonProfessionsMagic() -> std::vector<std::string>;
        auto getCommonProfessionsBlessed() -> std::vector<std::string>;
        auto getCommonAdvantages() -> std::vector<std::string>;
        auto getCommonDisadvantages() -> std::vector<std::string>;
        auto getUncommonAdvantages() -> std::vector<std::string>;
        auto getUncommonDisadvantages() -> std::vector<std::string>;
        auto getCommonSkills() -> std::vector<std::string>;
        auto getUncommonSkills() -> std::vector<std::string>;
        auto getCommonNamesMale() -> std::vector<std::string>;
        auto getCommonNamesFemale() -> std::vector<std::string>;
        auto getCommonNamesFamily() -> std::vector<std::string>;
        auto getCommonNamesNoble() -> std::vector<std::string>;
        auto getPackage() -> std::map<std::string, int>;
        auto getPackageApCost() -> int;
    };
}}
#endif //AXEL_TDE_CULTURE_HPP