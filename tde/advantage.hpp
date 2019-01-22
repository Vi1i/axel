//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_ADVANTAGE_HPP
#define AXEL_TDE_ADVANTAGE_HPP

#include <string>

namespace tde {
    class advantage {
        std::string name_;
        std::string description_;
        std::string rules_;
        std::string range_;
        std::string actions_;
        std::string prerequisites_;
        int ap_value_;

    public:
        advantage() = default;
        advantage(const std::string &name, const std::string &description,
                  const std::string &rules, const std::string &range,
                  const std::string &actions, const std::string &prerequisites,
                  int ap_value);

        bool operator<(const advantage& rhs) const {
            return this->name_ < rhs.name_;
        }

        bool operator==(const advantage& rhs) const {
            return this->name_ == rhs.name_;
        }

        bool operator==(const std::string& rhs) const {
            return this->name_ == rhs;
        }
    };
}
#endif //AXEL_TDE_ADVANTAGE_HPP