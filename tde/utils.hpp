//
// Created by Vi1i on 1/22/19.
//

#ifndef AXEL_TDE_UTILS_HPP
#define AXEL_TDE_UTILS_HPP

#include "advantage.hpp"
#include "disadvantage.hpp"
#include "race.hpp"

#include <set>

namespace tde { namespace utils {
    std::set<tde::advantage> parseAdvantages(std::string filename);
    std::set<tde::disadvantage> parseDisadvantages(std::string filename);
    std::set<tde::race> parseRaces(std::string filename, std::set<tde::advantage> advantages, std::set<tde::disadvantage> disadvantages);
}}
#endif //AXEL_TDE_UTILS_HPP