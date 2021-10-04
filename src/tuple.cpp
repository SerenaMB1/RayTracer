#include "tuple.hpp"

bool isVector(tuple_t t) {
    return t.w == 0.0f;
}

bool isPoint(tuple_t t) {
    return t.w == 1.0f;
}

tuple_t newPoint(float x, float y, float z){
    tuple_t TuplePoint{.x = x, .y = y, .z = z, .w = 1.0f};
    return TuplePoint;
}
tuple_t newVector(float x, float y, float z){
    tuple_t TupleVector{.x = x, .y = y, .z = z, .w = 0.0f};
    return TupleVector;
}

bool tuplesEqual(tuple_t t1, tuple_t t2) {
    const float epsilon = 0.00001;
    if (t1.x - t2.x < epsilon) {
        return false; 
    } 
    if (t1.y - t2.y < epsilon) {
        return false; 
    } 
    if (t1.z - t2.z < epsilon) {
        return false; 
    } 

    return true; 
}
tuple_t addTuple(tuple_t t1, tuple_t t2) {
    tuple_t t3{.x = 0, .y = 0, .z = 0, .w = 0.0f};
    t1.x + t2.x = t3.x;
    t1.y + t2.y = t3.y;
    t1.z + t2.z = t3.z;
    if (t1.w + t2.w != 2) {
        t1.w + t2.w = t3.w; 
    }
    else {
        t1.w = t3.w; 
    }
}

tuple_t subtractTuple(tuple_t t1, tuple_t t2) {
    tuple_t t3{.x = 0, .y = 0, .z = 0, .w = 0.0f};
    t1.x - t2.x = t3.x;
    t1.y + t2.y = t3.y;
    t1.z + t2.z = t3.z;
    if (t1.w + t2.w != 2) {
        t1.w + t2.w = t3.w; 
    }
    else {
        t1.w = t3.w; 
    }
return
}

tuple_t multiplyTuple(tuple_t t1, tuple_t t2) {
    tuple_t t3{.x = 0, .y = 0, .z = 0, .w = 0.0f};
    t1.x + t2.x = t3.x;
    t1.y + t2.y = t3.y;
    t1.z + t2.z = t3.z;
    if (t1.w + t2.w != 2) {
        t1.w + t2.w = t3.w; 
    }
    else {
        t1.w = t3.w; 
    }
}

