//
// Created by Vi1i on 1/22/19.
//

#include "advantage.hpp"

#include <string>


axel::tde::advantage::advantage(struct axel::tde::advantage::data datum) :
        name_(datum.name),
        description_(datum.description),
        rules_(datum.rules),
        range_(datum.range),
        actions_(datum.actions),
        prerequisites_(datum.prerequisites),
        ap_value_(datum.ap_value) {}

axel::tde::advantage::~advantage() = default;

auto axel::tde::advantage::getName() -> std::string {
    return name_;
}

auto axel::tde::advantage::getDescription() -> std::string {
    return description_;
}

auto axel::tde::advantage::getRules() -> std::string {
    return rules_;
}

auto axel::tde::advantage::getRange() -> std::string {
    return range_;
}

auto axel::tde::advantage::getActions() -> std::string {
    return actions_;
}

auto axel::tde::advantage::getPrerequisites() -> std::string {
    return prerequisites_;
}

auto axel::tde::advantage::getApValue() -> int {
    return ap_value_;
}