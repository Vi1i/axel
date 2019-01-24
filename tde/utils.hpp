//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_UTILS_HPP
#define AXEL_TDE_UTILS_HPP

#include "advantage.hpp"
#include "disadvantage.hpp"
#include "race.hpp"
#include "skill.hpp"
#include "culture.hpp"
#include "character.hpp"

#include <set>

namespace tde { namespace utils {
    struct lookup {
        std::set<tde::advantage> advantages;
        std::set<tde::disadvantage> disadvantages;
        std::set<tde::race> races;
        std::set<tde::skill> skills;
        std::set<tde::culture> cultures;
    };

    std::set<tde::advantage> parseAdvantages(std::string filename);
    std::set<tde::disadvantage> parseDisadvantages(std::string filename);
    std::set<tde::race> parseRaces(std::string filename, std::set<tde::advantage> advantages, std::set<tde::disadvantage> disadvantages);
    std::set<tde::skill> parseSkills(std::string filename);
    std::set<tde::culture> parseCultures(std::string filename);

    int calcCharApCost(tde::utils::lookup lu, tde::character character);
}}
#endif //AXEL_TDE_UTILS_HPP