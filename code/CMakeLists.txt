cmake_minimum_required(VERSION 3.25)
project(prestanta)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/usr/bin/qmake6")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(prestanta main.cpp event.h person.h Repo.h service.h personwindow.cpp personwindow.h personwindow.ui observer.h bestwindow.cpp bestwindow.h bestwindow.ui)
target_link_libraries(prestanta
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

