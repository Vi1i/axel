//
// Created by Vi1i on 1/22/19.
//

#include "attributes.hpp"

axel::tde::attributes::attributes(struct axel::tde::attributes::data datum) :
                            courage_(datum.courage),
                            sagacity_(datum.sagacity),
                            intuition_(datum.intuition),
                            charisma_(datum.charisma),
                            dexterity_(datum.dexterity),
                            agility_(datum.agility),
                            constitution_(datum.constitution),
                            strength_(datum.strength) {}

auto axel::tde::attributes::getCourage() -> int {
    return courage_;
}

auto axel::tde::attributes::getSagacity() -> int {
    return sagacity_;
}

auto axel::tde::attributes::getIntuition() -> int {
    return intuition_;
}

auto axel::tde::attributes::getCharisma() -> int {
    return charisma_;
}

auto axel::tde::attributes::getDexterity() -> int {
    return dexterity_;
}

auto axel::tde::attributes::getAgility() -> int {
    return agility_;
}

auto axel::tde::attributes::getConstitution() -> int {
    return constitution_;
}

auto axel::tde::attributes::getStrength() -> int {
    return strength_;
}
