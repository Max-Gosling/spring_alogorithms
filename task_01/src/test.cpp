#include <gtest/gtest.h>
#include <utility>

#include <search.hpp>

TEST(SumOfTwo, Simple)
{
    int nums[5] = {1, 2, 4, 8, 52};
    ASSERT_EQ(FindTwoSum(6, 5, nums), std::make_pair(2, 4));
    ASSERT_EQ(FindTwoSum(42, 5, nums), std::make_pair(-1, -1));
}

TEST(SumOfTwo, Empty)
{
    int empty[] = {};
    int one[1] = {1};
    ASSERT_EQ(FindTwoSum(0, 0, empty), std::make_pair(-1, -1));
    ASSERT_EQ(FindTwoSum(2, 1, one), std::make_pair(-1, -1));
    ASSERT_EQ(FindTwoSum(42, 1, one), std::make_pair(-1, -1));
}