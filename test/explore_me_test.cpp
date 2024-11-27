#include <gtest/gtest.h>
#include "explore_me.h"

TEST(ExploreMe, Test1) {
    EXPECT_EQ(exploreMe(1,1, "c"), 0);
}

TEST(ExploreMe, Test2) {
    EXPECT_EQ(exploreMe(-1,-1, "c"), 0);
}

TEST(ExploreMe, Test3) {
    EXPECT_EQ(exploreMe(2000010, 1, "c"), 0);
}

TEST(ExploreMe, Test4) {
    EXPECT_EQ(exploreMe(2000010, 2000005, "c"), 0);
}

TEST(ExploreMe, Test5) {
    EXPECT_EQ(exploreMe(2000010, 2000005, "c"), 0);
}

TEST(ExploreMe, Test6) {
    EXPECT_EQ(exploreMe(2000010, 2000005, "FUZZING"), 0);
}

TEST(ExploreMe, Test7) {
    EXPECT_EQ(exploreMe(2000013, 2000015, "seg-fault"), 0);
}
