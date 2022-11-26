#include<gtest/gtest.h>
#include "zero.h"

class ZeroTestSuite : public::testing::Test {
  protected:
    Zero zero;
};

TEST_F(ZeroTestSuite, rotate_two_zeros){
  EXPECT_EQ(1,2);
};
