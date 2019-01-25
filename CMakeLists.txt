cmake_minimum_required(VERSION 3.13)
project(Axel)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(tde)

add_executable(axel
        app.cpp
        gui/mainwidget.cpp
        gui/mainwidget.hpp)

qt5_use_modules(axel Widgets)

target_link_libraries(axel
        Axel
        ${Qt5Widgets_LIBRARIES})