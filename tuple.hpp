#ifndef __TUPLE__H__
#define __TUPLE__H__

struct tuple_t {
    int x;
    int y;
    int z;
    int w;
} tuple;

bool isVector(tuple_t t); 

bool isPoint(tuple_t t);

#endif  //!__TUPLE__H__