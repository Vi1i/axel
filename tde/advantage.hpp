//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_ADVANTAGE_HPP
#define AXEL_TDE_ADVANTAGE_HPP

#include <string>
#include <memory>

namespace axel { namespace tde {
    class advantage {
        std::string name_;
        std::string description_;
        std::string rules_;
        std::string range_;
        std::string actions_;
        std::string prerequisites_;
        int ap_value_;

    public:
        struct data {
            std::string name;
            std::string description;
            std::string rules;
            std::string range;
            std::string actions;
            std::string prerequisites;
            int ap_value;
        };

        auto getName() -> std::string;
        auto getDescription() -> std::string;
        auto getRules() -> std::string;
        auto getRange() -> std::string;
        auto getActions() -> std::string;
        auto getPrerequisites() -> std::string;
        auto getApValue() -> int;

        advantage(struct axel::tde::advantage::data);
        ~advantage();
    };
}}
#endif //AXEL_TDE_ADVANTAGE_HPP