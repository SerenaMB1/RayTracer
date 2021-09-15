#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

#include "tuple.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    tuple_t tupleVector; 
    int x = 4.3;
    int y = -4.2;
    int z = 3.1;
    int w = 0;

    tupleVector.x = x;
    tupleVector.y = y;
    tupleVector.z = z;
    tupleVector.w = w;
    

    
    if (isVector(tupleVector)) {
         cout << tupleVector.w; 
    }

    return 0;
}

