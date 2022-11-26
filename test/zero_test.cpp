#include<gtest/gtest.h>
#include<vector>
#include "zero.h"

class ZeroTestSuite : public::testing::Test {
  protected:
    Zero zero;
};

TEST_F(ZeroTestSuite, rotate_two_zeros){
  std::vector<int> expected{1,2,3,0,0};
  std::vector<int> input{0,1,0,2,3};
  EXPECT_EQ(expected, zero.move_zeros(input));
};
