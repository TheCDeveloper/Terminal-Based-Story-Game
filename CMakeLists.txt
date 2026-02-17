cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


project(StoryGame)


file(GLOB SOURCES CONFIGURE_DEPENDS src/*.cpp)
add_executable(StoryGame ${SOURCES})
