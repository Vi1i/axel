//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_RACE_HPP
#define AXEL_TDE_RACE_HPP

#include "advantage.hpp"
#include "disadvantage.hpp"

#include <unordered_map>
#include <set>

namespace tde {
    class race {
        std::string name_;
        int life_points_;
        int spirit_;
        int toughness_;
        int movement_;
        std::string maximums_;
        std::set<tde::advantage> advantages_;
        std::set<tde::disadvantage> disadvantages_;
        int ap_cost_;
    public:
        race(const std::string &name, int life_points,
             int spirit, int toughness,
             int movement, const std::string &maximums,
             const std::set<advantage> &advantages, const std::set<disadvantage> &diadvantages,
             int ap_cost);

        const std::string &getName() const;
        int getLifePoints() const;
        int getSpirit() const;
        int getToughness() const;
        int getMovement() const;
        const std::string &getMaximums() const;
        const std::set<advantage> &getAdvantages() const;
        const std::set<disadvantage> &getDisadvantages() const;
        int getApCost() const;

        bool operator<(const race& rhs) const {
            return this->name_ < rhs.name_;
        }
    };
}
#endif //AXEL_TDE_RACE_HPP
