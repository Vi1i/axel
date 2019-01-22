//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_RACE_HPP
#define AXEL_TDE_RACE_HPP

#include <unordered_map>
#include <set>
#include "advantage.hpp"
#include "disadvantage.hpp"

namespace tde {
    class race {
        int name_;
        int life_points_;
        int spirit_;
        int toughness_;
        int movement_;
        std::string maximums_;
        std::set<tde::advantage> advantages_;
        std::set<tde::disadvantage> diadvantages_;
        int ap_cost_;
    public:
        bool operator<(const race& rhs) const {
            return this->name_ < rhs.name_;
        }
    };
}
#endif //AXEL_TDE_RACE_HPP
