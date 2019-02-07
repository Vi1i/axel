//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_ATTRIBUTES_HPP
#define AXEL_TDE_ATTRIBUTES_HPP

namespace axel { namespace tde {
    class attributes {
        int courage_;
        int sagacity_;
        int intuition_;
        int charisma_;
        int dexterity_;
        int agility_;
        int constitution_;
        int strength_;

    public:
        struct data {
            int courage;
            int sagacity;
            int intuition;
            int charisma;
            int dexterity;
            int agility;
            int constitution;
            int strength;
        };

        auto getCourage() -> int;
        auto getSagacity() -> int;
        auto getIntuition() -> int;
        auto getCharisma() -> int;
        auto getDexterity() -> int;
        auto getAgility() -> int;
        auto getConstitution() -> int;
        auto getStrength() -> int;

        attributes(struct axel::tde::attributes::data);
    };
}}
#endif //AXEL_TDE_ATTRIBUTES_HPP