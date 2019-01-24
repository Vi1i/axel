//
// Created by Vi1i on 1/22/19.
//

#include "race.hpp"

tde::race::race(const std::string &name, int life_points,
     int spirit, int toughness,
     int movement, const std::string &maximums,
     const std::set<std::string> &advantages, const std::set<std::string> &disadvantages,
     int ap_cost) :
        name_(name), life_points_(life_points),
        spirit_(spirit), toughness_(toughness),
        movement_(movement), maximums_(maximums),
        advantages_(advantages), disadvantages_(disadvantages),
        ap_cost_(ap_cost) {}

const std::string &tde::race::getName() const {
    return this->name_;
}

int tde::race::getLifePoints() const {
    return this->life_points_;
}

int tde::race::getSpirit() const {
    return this->spirit_;
}

int tde::race::getToughness() const {
    return this->toughness_;
}

int tde::race::getMovement() const {
    return this->movement_;
}

const std::string &tde::race::getMaximums() const {
    return this->maximums_;
}

const std::set<std::string> &tde::race::getAdvantages() const {
    return this->advantages_;
}

const std::set<std::string> &tde::race::getDisadvantages() const {
    return this->disadvantages_;
}

int tde::race::getApCost() const {
    return this->ap_cost_;
}
