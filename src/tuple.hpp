#ifndef __TUPLE__H__
#define __TUPLE__H__

struct tuple_t {
    float x;
    float y;
    float z;
    float w;
} ;

bool isVector(tuple_t t);
bool isPoint(tuple_t t);
tuple_t newPoint(float x, float y, float z);
tuple_t newVector(float x, float y, float z);

#endif  //!__TUPLE__H__