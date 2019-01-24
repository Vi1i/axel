//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_RACE_HPP
#define AXEL_TDE_RACE_HPP

#include <set>

namespace tde {
    class race {
        std::string name_;
        int life_points_;
        int spirit_;
        int toughness_;
        int movement_;
        std::string maximums_;
        std::set<std::string> advantages_;
        std::set<std::string> disadvantages_;
        int ap_cost_;
    public:
        race() = default;
        race(const std::string &name, int life_points,
             int spirit, int toughness,
             int movement, const std::string &maximums,
             const std::set<std::string> &advantages, const std::set<std::string> &diadvantages,
             int ap_cost);

        const std::string &getName() const;
        int getLifePoints() const;
        int getSpirit() const;
        int getToughness() const;
        int getMovement() const;
        const std::string &getMaximums() const;
        const std::set<std::string> &getAdvantages() const;
        const std::set<std::string> &getDisadvantages() const;
        int getApCost() const;

        bool operator<(const race& rhs) const {
            return this->name_ < rhs.name_;
        }
    };
}
#endif //AXEL_TDE_RACE_HPP
