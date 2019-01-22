//
// Created by Vi1i on 1/22/19.
//

#include <cstdlib>
#include <set>
#include <string>

#include "tde/advantage.hpp"
#include "tde/disadvantage.hpp"
#include "tde/utils.hpp"

int main(int argc, char * argv[]) {
    if(argc != 3) {
        return EXIT_FAILURE;
    }

    std::string advantage_filename = argv[1];
    std::string disadvantage_filename = argv[2];

    std::set<tde::advantage> advantages;
    std::set<tde::disadvantage> disadvantages;
    advantages = tde::utils::parseAdvantages(advantage_filename);
    disadvantages = tde::utils::parseDisadvantages(disadvantage_filename);

    return EXIT_SUCCESS;
}