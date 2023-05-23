cmake_minimum_required(VERSION 3.25)
project(qt_tryout_clion)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(qt_tryout_clion main.cpp MainWindow.cpp MainWindow.h)
target_link_libraries(qt_tryout_clion
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

