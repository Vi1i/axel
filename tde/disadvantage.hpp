//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_DISADVANTAGE_HPP
#define AXEL_TDE_DISADVANTAGE_HPP

#include <string>

namespace tde {
    class disadvantage {
        std::string name_;
        std::string description_;
        std::string rules_;
        std::string range_;
        std::string actions_;
        std::string prerequisites_;
        int ap_value_;

    public:
        disadvantage() = default;
        disadvantage(const std::string &name, const std::string &description,
                     const std::string &rules, const std::string &range,
                     const std::string &actions, const std::string &prerequisites,
                     int ap_value);

        bool operator<(const disadvantage& rhs) const {
            return this->name_ < rhs.name_;
        }

        bool operator==(const disadvantage& rhs) const {
            return this->name_ == rhs.name_;
        }

        bool operator==(const std::string& rhs) const {
            return this->name_ == rhs;
        }
    };
}
#endif //AXEL_TDE_DISADVANTAGE_HPP