//
// Created by Vi1i on 1/24/19.
//

#ifndef AXEL_TDE_CHARACTER_HPP
#define AXEL_TDE_CHARACTER_HPP

#include "attributes.hpp"
#include "race.hpp"
#include "culture.hpp"

namespace tde {
    class character {
        std::string name_;
        int life_points_;
        int spirit_;
        int toughness_;
        int movement_;

        std::string race_;
        std::string culture_;
        tde::attributes attributes_;
        std::map<std::string, int> advantages_;
        std::map<std::string, int> disadvantages_;
        std::map<std::string, int> special_abilities_;

    public:
        character(const std::string &name, const std::string &race,
                  const std::string &culture, const tde::attributes &attributes);

        const std::string &getRace() const;
        const std::string &getCulture() const;
        const attributes &getAttributes() const;
        const std::map<std::string, int> &getAdvantages() const;
        const std::map<std::string, int> &getDisadvantages() const;
        const std::map<std::string, int> &getSpecialAbilities() const;
    };
}
#endif //AXEL_TDE_CHARACTER_HPP
