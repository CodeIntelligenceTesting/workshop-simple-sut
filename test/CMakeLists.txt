add_executable(explore_me_test explore_me_test.cpp)
target_link_libraries(
    explore_me_test PRIVATE exploreMe GTest::gtest_main
)

# Link gtest and gtest_main to the test executable
target_include_directories(explore_me_test PRIVATE ${PROJECT_SOURCE_DIR}/src)

# Add a test
add_test(NAME Explore_me_test COMMAND explore_me_test)