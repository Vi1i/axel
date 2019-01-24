//
// Created by Vi1i on 1/22/19.
//

#include "attributes.hpp"

int tde::attributes::getAttribute(tde::attributes::type attr) const {
    switch(attr) {
        case tde::attributes::type::COURAGE:
            return this->courage_;
        case tde::attributes::type::SAGACITY:
            return this->sagacity_;
        case tde::attributes::type::INTUITION:
            return this->intuition_;
        case tde::attributes::type::CHARISMA:
            return this->charisma_;
        case tde::attributes::type::DEXTERITY:
            return this->dexterity_ ;
        case tde::attributes::type::AGILITY:
            return this->agility_;
        case tde::attributes::type::CONSTITUTION:
            return this->constitution_;
        case tde::attributes::type::STRENGTH:
            return this->strength_;
        default:
            break;
    }
}

void tde::attributes::setAttribute(tde::attributes::type attr, int attr_val) {
    switch(attr) {
        case tde::attributes::type::COURAGE:
            this->courage_ = attr_val;
            break;
        case tde::attributes::type::SAGACITY:
            this->sagacity_ = attr_val;
            break;
        case tde::attributes::type::INTUITION:
            this->intuition_ = attr_val;
            break;
        case tde::attributes::type::CHARISMA:
            this->charisma_ = attr_val;
            break;
        case tde::attributes::type::DEXTERITY:
            this->dexterity_ = attr_val;
            break;
        case tde::attributes::type::AGILITY:
            this->agility_ = attr_val;
            break;
        case tde::attributes::type::CONSTITUTION:
            this->constitution_ = attr_val;
            break;
        case tde::attributes::type::STRENGTH:
            this->strength_ = attr_val;
            break;
        default:
            break;
    }
}

tde::attributes::attributes(int courage, int sagacity,
                            int intuition, int charisma,
                            int dexterity, int agility,
                            int constitution, int strength)
                            : courage_(courage), sagacity_(sagacity),
                              intuition_(intuition), charisma_(charisma),
                              dexterity_(dexterity), agility_(agility),
                              constitution_(constitution), strength_(strength) {}
