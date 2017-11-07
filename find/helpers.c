/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n) {

    if(n < 1) {
        return false;
    }
    // TODO: implement a searching algorithm
    int start = 0;
    int end = n - 1;

    while(end >= start) {
        int center = (start + end) / 2;

        if(value == values[center]) {
            return true;
        }
        if(value == values[start]) {
            return true;
        }

    }

    return false;
}

// Your implementation must return true if value is in values and false if value is not in values.

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
