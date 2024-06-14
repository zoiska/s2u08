cmake_minimum_required(VERSION 3.27)
project(s2u08)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.6.1/mingw_64")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Qml
        REQUIRED)

add_executable(s2u08 main.cpp
        Clicker/clicker.ui
        Clicker/clicker.cpp
        Clicker/clicker.h
        Greeter/greeter.cpp
        Greeter/greeter.h
        Greeter/greeter.ui
        Selector/selector.cpp
        Selector/selector.h
        Selector/selector.ui
)

target_link_libraries(s2u08
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Qml)