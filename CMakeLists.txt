cmake_minimum_required(VERSION 3.22)
project(gui_Library)

set(CMAKE_CXX_STANDARD 23)

add_executable(gui_Library main.cpp
       FontManager.h
        FontManager.cpp
        FontEnums.h
        Application.h
        Application.cpp Text.cpp Text.h StateEnum.h States.cpp States.h MouseEvents.cpp MouseEvents.h InputBox.cpp InputBox.h Cursor.cpp Cursor.h)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

target_link_libraries(gui_Library sfml-graphics sfml-audio)
