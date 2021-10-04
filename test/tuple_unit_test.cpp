#include <limits.h>
#include "tuple.hpp"
#include "gtest/gtest.h"
namespace {

// Tests isVector().

// Test 
TEST(isVectorTest, true) {

 tuple_t testTuplePoint;
 tuple_t testTupleVector;
 //tuple_t testTupleVector{.x = 4.3, .y = -4.2, .z = 3.1, .w = 0};
 //tuple_t testTuplePoint{.x = 4.3, .y = -4.2, .z = 3.1, .w = 1.0};

 testTupleVector = newVector(4.3, -4.2, 3.1);
 EXPECT_EQ(true, isVector(testTupleVector));

 testTuplePoint = newPoint(4.3, -4.2, 3.1); 
 EXPECT_EQ(false, isVector(testTuplePoint));
}
 TEST(addTuple, true) {

 tuple_t testTuplePoint;
 tuple_t testTupleVector; 

 tuple 

 testTupleVector = newVector(4.3, -4.2, 3.1);
 testTuplePoint = newPoint(4.3, -4.2, 3.1); 
 EXPECT_EQ(true, addTuple(testTupleVector, testTupleVector));

 testTuplePoint = newPoint(4.3, -4.2, 3.1); 
 EXPECT_EQ(false, addTuple(testTuplePoint, testTupleVector));
 }


} 