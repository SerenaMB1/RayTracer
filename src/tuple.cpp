#include "tuple.hpp"

bool isVector(tuple_t t) {
    return true; 
}

bool isPoint(tuple_t t) {
    return true; 
}

tuple_t newPoint(float x, float y, float z){
    tuple_t TuplePoint{.x = x, .y = y, .z = z, .w = 1.0};
    return TuplePoint;
}
tuple_t newVector(float x, float y, float z){
    tuple_t TupleVector{.x = x, .y = y, .z = z, .w = 0};
    return TupleVector;
}