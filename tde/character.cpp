//
// Created by Vi1i on 1/24/19.
//

#include "character.hpp"

tde::character::character(const std::string &name, const std::string &race,
                          const std::string &culture, const tde::attributes &attributes)
                          : race_(race), culture_(culture),
                            attributes_(attributes) {}

const std::string &tde::character::getRace() const {
    return this->race_;
}

const std::string &tde::character::getCulture() const {
    return this->culture_;
}

const tde::attributes &tde::character::getAttributes() const {
    return this->attributes_;
}

const std::map<std::string, int> &tde::character::getAdvantages() const {
    return this->advantages_;
}

const std::map<std::string, int> &tde::character::getDisadvantages() const {
    return this->disadvantages_;
}

const std::map<std::string, int> &tde::character::getSpecialAbilities() const {
    return this->special_abilities_;
}