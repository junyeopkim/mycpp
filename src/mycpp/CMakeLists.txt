add_executable(mycpp
    Main.cpp
    Dummy.cpp)
target_include_directories(mycpp PRIVATE ${PROJECT_SOURCE_DIR})

add_executable(test_mycpp
    CatchMain.cpp
    DummyTest.cpp
    Dummy.cpp)
target_include_directories(test_mycpp PRIVATE ${PROJECT_SOURCE_DIR})
target_link_libraries(test_mycpp PRIVATE Catch2::Catch2)
