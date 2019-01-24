//
// Created by Vi1i on 1/23/19.
//

#ifndef AXEL_TDE_SKILL_HPP
#define AXEL_TDE_SKILL_HPP

#include <string>
#include <set>
#include <algorithm>

namespace tde {
    class skill {
    public:
        enum type {
            PHYISICAL,
            SOCIAL,
            NATURE,
            KNOWLEDGE,
            CRAFT,
            ERROR,
        };

        skill(const std::string &name, tde::skill::type type,
              const std::string &new_application, const std::string &uses,
              const std::string &check, const std::string &description,
              const std::set<std::string> &applications, const std::string &encumbrance,
              const std::string &tools, const std::string &quality,
              const std::string &failed_check, const std::string &critical_success,
              const std::string &botch, const std::string &improvement_cost);

        static tde::skill::type getType(std::string type_str) {
            std::transform(type_str.begin(), type_str.end(), type_str.begin(), ::toupper);
            if(type_str == "PHYISICAL") {
                return tde::skill::type::PHYISICAL;
            } else if(type_str == "SOCIAL") {
                return tde::skill::type::SOCIAL;
            } else if(type_str == "NATURE") {
                return tde::skill::type::NATURE;
            } else if(type_str == "KNOWLEDGE") {
                return tde::skill::type::KNOWLEDGE;
            } else if(type_str == "CRAFT") {
                return tde::skill::type::CRAFT;
            } else {
                return tde::skill::type::ERROR;
            }
        }

        const std::string &getName() const;
        tde::skill::type getType() const;
        const std::string &getNewApplication() const;
        const std::string &getUses() const;
        const std::string &getCheck() const;
        const std::string &getDescription() const;
        const std::set<std::string> &getApplications() const;
        const std::string &getEncumbrance() const;
        const std::string &getTools() const;
        const std::string &getQuality() const;
        const std::string &getFailedCheck() const;
        const std::string &getCriticalSuccess() const;
        const std::string &getBotch() const;
        const std::string &getImprovementCost() const;

        bool operator<(const skill& rhs) const {
            return this->name_ < rhs.name_;
        }

        bool operator==(const skill& rhs) const {
            return this->name_ == rhs.name_;
        }

        bool operator==(const std::string& rhs) const {
            return this->name_ == rhs;
        }

    private:
        std::string name_;
        tde::skill::type type_;
        std::string new_application_;
        std::string uses_;
        std::string check_;
        std::string description_;
        std::set<std::string> applications_;
        std::string encumbrance_;
        std::string tools_;
        std::string quality_;
        std::string failed_check_;
        std::string critical_success_;
        std::string botch_;
        std::string improvement_cost_;
    };
}
#endif //AXEL_TDE_SKILL_HPP