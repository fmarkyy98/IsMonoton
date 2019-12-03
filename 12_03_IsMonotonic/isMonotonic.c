#include <stdlib.h>
#include <stdbool.h>

#include "isMonotonic.h"

bool isMonotonic(int* array, size_t length)
{
    size_t i = 0;
    bool monotonous = true;
    while(i < length - 1 && monotonous)
    {
        if (array[i] > array[i + 1])
        {
            monotonous = false;
        }
        ++i;
    }
    if(monotonous)
    {
        return monotonous;
    }

    i = 0;
    monotonous = true;
    while(i < length - 1 && monotonous)
    {
        if (array[i] < array[i + 1])
        {
            monotonous = false;
        }
        ++i;
    }
        return monotonous;    
}