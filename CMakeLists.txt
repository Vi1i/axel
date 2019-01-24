cmake_minimum_required(VERSION 3.13)
project(Axel)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(yaml-cpp REQUIRED)

add_library(Axel SHARED
        tde/attributes.cpp
        tde/attributes.hpp
        tde/utils.cpp
        tde/utils.hpp
        tde/race.cpp
        tde/race.hpp
        tde/advantage.cpp
        tde/advantage.hpp
        tde/disadvantage.cpp
        tde/disadvantage.hpp
        tde/culture.cpp
        tde/culture.hpp
        tde/skill.cpp
        tde/skill.hpp
        tde/character.cpp tde/character.hpp)

target_link_libraries(Axel ${YAML_CPP_LIBRARIES})
include_directories(Axel
        ${YAML_CPP_INCLUDE_DIR}
)

add_executable(axel app.cpp)
target_link_libraries(axel Axel)