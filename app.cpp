//
// Created by Vi1i on 1/22/19.
//

#include "tde/advantage.hpp"
#include "tde/disadvantage.hpp"
#include "tde/utils.hpp"
#include "tde/culture.hpp"
#include "gui/mainwidget.hpp"

#include <cstdlib>
#include <set>
#include <string>
#include <iostream>

#include <QtWidgets>

int main(int argc, char * argv[]) {
    if(argc != 2) {
        return EXIT_FAILURE;
    }

//    // Creates an instance of QApplication
//    QApplication a(argc, argv);
//    // This is our MainWidget class containing our GUI and functionality
//    axel::gui::mainwidget w;
//    w.show(); // Show main window
//    // run the application and return execs() return value/code
//    return a.exec();

    std::string data_dir = argv[1];
    std::string advantages_filename = data_dir + "/advantages.yml";
    std::string disadvantages_filename = data_dir + "/disadvantages.yml";
    std::string races_filename = data_dir + "/races.yml";
    std::string skills_filename = data_dir + "/skills.yml";
    std::string cultures_filename = data_dir + "/cultures.yml";

    tde::utils::lookup db;
    db.advantages = tde::utils::parseAdvantages(advantages_filename);
    db.disadvantages = tde::utils::parseDisadvantages(disadvantages_filename);
    db.races = tde::utils::parseRaces(races_filename, db.advantages, db.disadvantages);
    db.skills = tde::utils::parseSkills(skills_filename);
    db.cultures = tde::utils::parseCultures(cultures_filename);
    axel::tde::attributes attr(axel::tde::attributes::data{8, 8, 8 ,8, 8, 8, 8, 8});
    tde::character character("Bob", "Human", "Andergastan", attr);

    std::cout << tde::utils::calcCharApCost(db, character) << std::endl;

    return EXIT_SUCCESS;
}