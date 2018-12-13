#include "gtest/gtest.h"

namespace {
TEST(zero, zero_test) { ASSERT_EQ(0, 0); }
} // namespace

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}