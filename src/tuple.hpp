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

#endif  //!__TUPLE__H__