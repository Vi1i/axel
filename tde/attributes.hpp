//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_ATTRIBUTES_HPP
#define AXEL_TDE_ATTRIBUTES_HPP

namespace tde {
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
        enum type {
            COURAGE,
            SAGACITY,
            INTUITION,
            CHARISMA,
            DEXTERITY,
            AGILITY,
            CONSTITUTION,
            STRENGTH,
        };

        int getAttribute(tde::attributes::type attr) const;
        void setAttribute(tde::attributes::type attr, int attr_val);
    };
}
#endif //AXEL_TDE_ATTRIBUTES_HPP