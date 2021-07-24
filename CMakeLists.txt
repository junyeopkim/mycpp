cmake_minimum_required(VERSION 3.11)
project(mycpp
        VERSION 0.1
        DESCRIPTION "study cpp project"
        HOMEPAGE_URL "http://github.com/junyeopkim/mycpp"
        LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(PROJECT_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "In-source build detected!")
endif()

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v2.13.1)
FetchContent_MakeAvailable(Catch2)

add_subdirectory(src)
