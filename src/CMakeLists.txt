add_library(exploreMe explore_me.cpp)
target_sources(exploreMe PUBLIC explore_me.h)

add_executable(${PROJECT_NAME} main.cpp )
target_link_libraries(${PROJECT_NAME} PRIVATE exploreMe)