add_fuzz_test(my_fuzz_test my_fuzz_test.cpp TEST_FRAMEWORK GTEST)

target_link_libraries(my_fuzz_test exploreMe GTest::gtest)
target_include_directories(my_fuzz_test PUBLIC ${PROJECT_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})
target_compile_options(my_fuzz_test PUBLIC "-fsanitize=address,undefined")
target_link_options(my_fuzz_test PUBLIC "-fsanitize=address,undefined")