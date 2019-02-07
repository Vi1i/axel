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
#include <vector>

namespace tde { namespace utils {
    struct lookup {
        std::vector<axel::tde::advantage> advantages;
        std::set<tde::disadvantage> disadvantages;
        std::set<tde::race> races;
        std::set<tde::skill> skills;
        std::set<axel::tde::culture> cultures;
    };

    std::vector<axel::tde::advantage> parseAdvantages(std::string filename);
    std::set<tde::disadvantage> parseDisadvantages(std::string filename);
    std::set<tde::race> parseRaces(std::string filename, std::vector<axel::tde::advantage> advantages, std::set<tde::disadvantage> disadvantages);
    std::set<tde::skill> parseSkills(std::string filename);
    std::set<axel::tde::culture> parseCultures(std::string filename);

    int calcCharApCost(tde::utils::lookup lu, tde::character character);
}}
#endif //AXEL_TDE_UTILS_HPP