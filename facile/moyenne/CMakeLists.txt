set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-register")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_CXX_STANDARD 14)
cmake_minimum_required(VERSION 3.2)

project(ListeNotes)


add_executable(liste_notes main.cpp)
