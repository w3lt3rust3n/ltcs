cmake_minimum_required(VERSION 3.0)

project(ltcs)

add_executable(ltcs ltcs_main.cpp ltcs-utils.cpp elcheats.cpp)

install(TARGETS ltcs RUNTIME DESTINATION bin)

