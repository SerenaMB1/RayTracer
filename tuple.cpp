#include "tuple.hpp"

bool isVector(tuple_t t) {
    return t.w == 0; 
}

bool isPoint(tuple_t t) {
    return t.w == 1; 
}