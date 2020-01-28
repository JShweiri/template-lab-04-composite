#include "gtest/gtest.h"
#include "sub.hpp"
#include "div.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "op_test.hpp"

TEST(composite_test, Op_Test ){
	Base* three = new Op(3);
	EXPECT_EQ("3.000000", three->stringify());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);


  return RUN_ALL_TESTS();
}
