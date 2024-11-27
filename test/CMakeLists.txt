# Find gtest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Create the test executable
add_executable(explore_me_test explore_me_test.cpp)
target_link_libraries(
    explore_me_test GTest::gtest_main exploreMe
)

# Link gtest and gtest_main to the test executable
target_link_libraries(explore_me_test ${GTEST_LIBRARIES} pthread)
target_include_directories(explore_me_test PRIVATE ${PROJECT_SOURCE_DIR}/src)

# Add a test
add_test(NAME Explore_me_test COMMAND explore_me_test)