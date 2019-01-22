//
// Created by Vi1i on 1/22/19.
//

#include "disadvantage.hpp"

tde::disadvantage::disadvantage(const std::string &name,
                                const std::string &description,
                                const std::string &rules,
                                const std::string &range,
                                const std::string &actions,
                                const std::string &prerequisites,
                                int ap_value) :
                                name_(name),
                                description_(description),
                                rules_(rules),
                                range_(range),
                                actions_(actions),
                                prerequisites_(prerequisites),
                                ap_value_(ap_value) {}