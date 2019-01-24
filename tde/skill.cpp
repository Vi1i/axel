//
// Created by Vi1i on 1/23/19.
//

#include "skill.hpp"

tde::skill::skill(const std::string &name, tde::skill::type type,
                  const std::string &new_application, const std::string &uses,
                  const std::string &check, const std::string &description,
                  const std::set<std::string> &applications, const std::string &encumbrance,
                  const std::string &tools, const std::string &quality,
                  const std::string &failed_check, const std::string &critical_success,
                  const std::string &botch, const std::string &improvement_cost)
                  : name_(name), type_(type),
                    new_application_(new_application), uses_(uses),
                    check_(check), description_(description),
                    applications_(applications), encumbrance_(encumbrance),
                    tools_(tools), quality_(quality),
                    failed_check_(failed_check), critical_success_(critical_success),
                    botch_(botch), improvement_cost_(improvement_cost) {}

const std::string &tde::skill::getName() const {
    return this->name_;
}

tde::skill::type tde::skill::getType() const {
    return this->type_;
}

const std::string &tde::skill::getNewApplication() const {
    return this->new_application_;
}

const std::string &tde::skill::getUses() const {
    return this->uses_;
}

const std::string &tde::skill::getCheck() const {
    return this->check_;
}

const std::string &tde::skill::getDescription() const {
    return this->description_;
}

const std::set<std::string> &tde::skill::getApplications() const {
    return this->applications_;
}

const std::string &tde::skill::getEncumbrance() const {
    return this->encumbrance_;
}

const std::string &tde::skill::getTools() const {
    return this->tools_;
}

const std::string &tde::skill::getQuality() const {
    return this->quality_;
}

const std::string &tde::skill::getFailedCheck() const {
    return this->failed_check_;
}

const std::string &tde::skill::getCriticalSuccess() const {
    return this->critical_success_;
}

const std::string &tde::skill::getBotch() const {
    return this->botch_;
}

const std::string &tde::skill::getImprovementCost() const {
    return this->improvement_cost_;
}