#include <gtest/gtest.h>
#include <utility>
#include <vector>

#include <search.hpp>

TEST(SumOfTwo, Simple) {
  std::vector<int> v = {1, 2,  4, 6, 8, 52};
  ASSERT_EQ(FindIdOfSum(6, v), std::make_pair(1, 2));
  ASSERT_EQ(FindIdOfSum(42, v), std::make_pair(-1, -1));
}

TEST(SumOfTwo, Empty){
  std::vector<int> empty_v = {};
  std::vector<int> one_elem = {1};
  ASSERT_EQ(FindIdOfSum(12, empty_v), std::make_pair(-1, -1));
  ASSERT_EQ(FindIdOfSum(42, one_elem), std::make_pair(-1, -1));
  ASSERT_EQ(FindIdOfSum(2, one_elem), std::make_pair(-1, -1));
}