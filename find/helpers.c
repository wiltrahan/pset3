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
    //start = left; end = right
    int start = 0;
    int end = n - 1;

    while(end >= start) {
        int center = (start + end) / 2;

        if(value == values[start] || value == values[center] || value == values[end]) {
            return true;
        }

        if(values[center] < value) {
            start = center + 1;
        }
        else if(values[center] > value) {
            end = center - 1;
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
    for(int i = 0; i < n - 2; i++) {
        // int min = i;
        if(values[i] > values[i + 1]) {
            values[i] = values[i + 1];
        }
    }
    return;
}

