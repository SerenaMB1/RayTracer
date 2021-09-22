#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

#include "tuple.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    tuple_t tupleVector; 
    float x = 4.3;
    float y = -4.2;
    float z = 3.1;
    float w = 0;

    tupleVector.x = x;
    tupleVector.y = y;
    tupleVector.z = z;
    tupleVector.w = w;
    
    if (isVector(tupleVector)) {
         cout << tupleVector.y; 
         cout << " Tuple is a vector";
    }
    if (isPoint(tupleVector)) {
         cout << tupleVector.w; 
         cout << " Tuple is a Point";
    }


    return 0;
}

