//
// Created by oboylela on 2/4/19.
//

#ifndef AXEL_TDE_DATA_HPP
#define AXEL_TDE_DATA_HPP

#include <string>
#include <set>
#include <map>
#include <vector>

namespace tde { namespace data {
    struct skill {
        enum type {
            PHYISICAL,
            SOCIAL,
            NATURE,
            KNOWLEDGE,
            CRAFT,
            ERROR,
        };

        std::string name;
        tde::data::skill::type type;
        std::string new_application;
        std::string uses;
        std::string check;
        std::string description;
        std::set<std::string> applications;
        std::string encumbrance;
        std::string tools;
        std::string quality;
        std::string failed_check;
        std::string critical_success;
        std::string botch;
        std::string improvement_cost;

        bool operator<(const tde::data::skill& rhs) const {
            return this->name < rhs.name;
        }

        bool operator==(const tde::data::skill& rhs) const {
            return this->name == rhs.name;
        }

        bool operator==(const std::string& rhs) const {
            return this->name == rhs;
        }
    };

    struct attributes {
        enum type {
            COURAGE,
            SAGACITY,
            INTUITION,
            CHARISMA,
            DEXTERITY,
            AGILITY,
            CONSTITUTION,
            STRENGTH,
        };

        int courage;
        int sagacity;
        int intuition;
        int charisma;
        int dexterity;
        int agility;
        int constitution;
        int strength;
    };

    struct disadvantage {
        std::string name;
        std::string description;
        std::string rules;
        std::string range;
        std::string actions;
        std::string prerequisites;
        int ap_value;

        bool operator<(const tde::data::disadvantage& rhs) const {
            return this->name < rhs.name;
        }

        bool operator==(const tde::data::disadvantage& rhs) const {
            return this->name == rhs.name;
        }

        bool operator==(const std::string& rhs) const {
            return this->name == rhs;
        }
    };

    struct advantage {
        std::string name;
        std::string description;
        std::string rules;
        std::string range;
        std::string actions;
        std::string prerequisites;
        int ap_value;

        bool operator<(const tde::data::advantage& rhs) const {
            return this->name < rhs.name;
        }

        bool operator==(const tde::data::advantage& rhs) const {
            return this->name == rhs.name;
        }

        bool operator==(const std::string& rhs) const {
            return this->name == rhs;
        }
    };

    struct culture_package {
        std::map<std::string, int> skills;
        int ap_cost;
    };

    struct culture {
        std::string name;
        std::string type;
        std::string language;
        std::string script;
        std::string area_knowledge;
        std::string social_status;
        std::vector<std::string> common_mudane_professions;
        std::vector<std::string> common_magic_professions;
        std::vector<std::string> common_blessed_professions;
        std::vector<std::string> common_advantages;
        std::vector<std::string> common_disadvantages;
        std::vector<std::string> uncommon_advantages;
        std::vector<std::string> uncommon_disadvantages;
        std::vector<std::string> common_skills;
        std::vector<std::string> uncommon_skills;
        std::vector<std::string> common_male_names;
        std::vector<std::string> common_female_names;
        std::vector<std::string> common_family_names;
        std::vector<std::string> common_noble_families;
        tde::data::culture_package culture_package;
    };

    struct race {
        std::string name;
        int life_points;
        int spirit;
        int toughness;
        int movement;
        std::string maximums;
        std::set<std::string> advantages;
        std::set<std::string> disadvantages;
        int ap_cost;
    };
}}

#endif //AXEL_TDE_DATA_HPP