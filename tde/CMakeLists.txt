cmake_minimum_required(VERSION 3.13)
project(libAxel)

find_package(yaml-cpp REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Axel SHARED
        attributes.cpp
        attributes.hpp
        utils.cpp
        utils.hpp
        race.cpp
        race.hpp
        advantage.cpp
        advantage.hpp
        disadvantage.cpp
        disadvantage.hpp
        culture.cpp
        culture.hpp
        skill.cpp
        skill.hpp
        character.cpp
        character.hpp)

target_link_libraries(Axel
        ${YAML_CPP_LIBRARIES}
        )
include_directories(Axel
        ${YAML_CPP_INCLUDE_DIR}
        )