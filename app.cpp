//
// Created by Vi1i on 1/22/19.
//

#include "tde/advantage.hpp"
#include "tde/disadvantage.hpp"
#include "tde/utils.hpp"

#include <cstdlib>
#include <set>
#include <string>
#include <iostream>

int main(int argc, char * argv[]) {
    if(argc != 2) {
        return EXIT_FAILURE;
    }

    std::string data_dir = argv[1];
    std::string advantages_filename = data_dir + "/advantages.yml";
    std::string disadvantages_filename = data_dir + "/disadvantages.yml";
    std::string races_filename = data_dir + "/races.yml";

    std::set<tde::advantage> advantages;
    std::set<tde::disadvantage> disadvantages;
    std::set<tde::race> races;

    advantages = tde::utils::parseAdvantages(advantages_filename);
    disadvantages = tde::utils::parseDisadvantages(disadvantages_filename);
    races = tde::utils::parseRaces(races_filename, advantages, disadvantages);

    return EXIT_SUCCESS;
}