//
// Created by Vi1i on 1/22/19.
//

#include "culture.hpp"


tde::culture::culture(const std::string &name, const std::string &type,
                     const std::map<std::string, int> &skills, int ap_cost)
                     : name_(name), type_(type),
                       skills_(skills), ap_cost_(ap_cost) {}

const std::string &tde::culture::getName() const {
    return this->name_;
}

const std::string &tde::culture::getType() const {
    return this->type_;
}

const std::map<std::string, int> &tde::culture::getSkills() const {
    return this->skills_;
}

int tde::culture::getApCost() const {
    return this->ap_cost_;
}
