//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_CULTURE_HPP
#define AXEL_TDE_CULTURE_HPP

#include <string>
#include <map>

#include "skill.hpp"

namespace tde {
    class culture {
        std::string name_;
        std::string type_;
        std::map<std::string, int> skills_;
        int ap_cost_;

    public:
        culture() = default;
        culture(const std::string &name, const std::string &type,
                const std::map<std::string, int> &skills, int ap_cost);

        const std::string &getName() const;
        const std::string &getType() const;
        const std::map<std::string, int> &getSkills() const;
        int getApCost() const;

        bool operator<(const culture& rhs) const {
            return this->name_ < rhs.name_;
        }

        bool operator==(const culture& rhs) const {
            return this->name_ == rhs.name_;
        }

        bool operator==(const std::string& rhs) const {
            return this->name_ == rhs;
        }
    };
}
#endif //AXEL_TDE_CULTURE_HPP