#include "gtest/gtest.h"
#include "sub.hpp"
#include "div.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "op_test.hpp"

TEST(composite_test, Op_Test_stringify ){
	Base* three = new Op(3);
	EXPECT_EQ("3.000000", three->stringify());
}

TEST(composite_test, Op_Test_evaluate) {
	Base* three = new Op(3);
	EXPECT_EQ(3, three->evaluate());
}

TEST(composite_test, Add_test_stringify) {
	Base* add1 = new Add (new Op(3),new Op(4));
	EXPECT_EQ("3.000000 + 4.000000", add1->stringify());
}

TEST(composite_test, Add_test_evaluate) {
	Base* add2 = new Add (new Op(3),new Op(4));
	EXPECT_EQ(7, add2->evaluate());
}

TEST(composite_test, Sub_test_stringify) {
	Base* sub1 = new Sub (new Op(3),new Op(4));
	EXPECT_EQ("3.000000 - 4.000000", sub1->stringify());
}

TEST(composite_test, Sub_test_evaluate) {
	Base* sub2 = new Sub (new Op(3),new Op(4));
	EXPECT_EQ(-1, sub2->evaluate());
}

TEST(composite_test, Mult_test_stringify) {
	Base* mult1 = new Mult (new Op(3),new Op(4));
	EXPECT_EQ("3.000000 * 4.000000", mult1->stringify());
}

TEST(composite_test, Mult_test_evaluate) {
	Base* mult2 = new Mult (new Op(3),new Op(4));
	EXPECT_EQ(12, mult2->evaluate());
}

TEST(composite_test, Div_test_stringify) {
	Base* div1 = new Div (new Op(3),new Op(4));
	EXPECT_EQ("3.000000 / 4.000000", div1->stringify());
}

TEST(composite_test, Div_test_evaluate) {
	Base* div2 = new Div (new Op(3),new Op(4));
	EXPECT_EQ(0.750000, div2->evaluate());
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);


  return RUN_ALL_TESTS();
}
