#include <limits.h>
#include "tuple.hpp"
#include "gtest/gtest.h"
namespace {


// Tests isVector().

// Test 
TEST(isVectorTest, true) {

 tuple_t testTupleVector{.x = 4.3, .y = -4.2, .z = 3.1, .w = 0};
 tuple_t testTuplePoint{.x = 4.3, .y = -4.2, .z = 3.1, .w = 1.0};
 EXPECT_EQ(true, isVector(testTupleVector));
 EXPECT_EQ(true, isVector(testTuplePoint));
//EXPECT_EQ(true, false);

// // Tests factorial of 0.
// TEST(FactorialTest, Zero) {
//   EXPECT_EQ(1, Factorial(0));
}

// // Tests factorial of positive numbers.
// TEST(FactorialTest, Positive) {
//   EXPECT_EQ(1, Factorial(1));
//   EXPECT_EQ(2, Factorial(2));
//   EXPECT_EQ(6, Factorial(3));
//   EXPECT_EQ(40320, Factorial(8));
// }


// // Tests IsPrime()

// // Tests negative input.
// TEST(IsPrimeTest, Negative) {
//   // This test belongs to the IsPrimeTest test case.

//   EXPECT_FALSE(IsPrime(-1));
//   EXPECT_FALSE(IsPrime(-2));
//   EXPECT_FALSE(IsPrime(INT_MIN));
// }

// // Tests some trivial cases.
// TEST(IsPrimeTest, Trivial) {
//   EXPECT_FALSE(IsPrime(0));
//   EXPECT_FALSE(IsPrime(1));
//   EXPECT_TRUE(IsPrime(2));
//   EXPECT_TRUE(IsPrime(3));
// }

// // Tests positive input.
// TEST(IsPrimeTest, Positive) {
//   EXPECT_FALSE(IsPrime(4));
//   EXPECT_TRUE(IsPrime(5));
//   EXPECT_FALSE(IsPrime(6));
//   EXPECT_TRUE(IsPrime(23));
// }
}  // namespace

// // Step 3. Call RUN_ALL_TESTS() in main().
// //
// // We do this by linking in src/gtest_main.cc file, which consists of
// // a main() function which calls RUN_ALL_TESTS() for us.
// //
// // This runs all the tests you've defined, prints the result, and
// // returns 0 if successful, or 1 otherwise.
// //
// // Did you notice that we didn't register the tests?  The
// // RUN_ALL_TESTS() macro magically knows about all the tests we
// // defined.  Isn't this convenient?