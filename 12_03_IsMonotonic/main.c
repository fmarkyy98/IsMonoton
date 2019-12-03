#include <stdlib.h> // malloc, free
#include <stdio.h>
#include <stdbool.h>

#include "isMonotonic.h"

int array1[] = {1,2,3,4,5,6,7,8,9};
int array2[] = {1,2,3,4,10,6,7,8,9};
int array3[] = {9,8,7,6,5,3,2,1};
int array4[] = {1,2,2,2,2,5,8,9};
int array5[] = {9,7,7,7,7,7,7,1,1,1,1};

bool test(int* input, int length, bool expectation)
{
    bool l;
    l = isMonotonic(input, length);
    return l == expectation;
}

int main()
{
    printf(test(array1, sizeof(array1) / sizeof(array1[0]), true) ? "Átment a teszten\n" : "Nem ment át a teszten\n");
    printf(test(array2, sizeof(array2) / sizeof(array2[0]), false) ? "Átment a teszten\n" : "Nem ment át a teszten\n");
    printf(test(array3, sizeof(array3) / sizeof(array3[0]), true) ? "Átment a teszten\n" : "Nem ment át a teszten\n");
    printf(test(array4, sizeof(array4) / sizeof(array4[0]), true) ? "Átment a teszten\n" : "Nem ment át a teszten\n");
    printf(test(array5, sizeof(array5) / sizeof(array5[0]), true) ? "Átment a teszten\n" : "Nem ment át a teszten\n");
}