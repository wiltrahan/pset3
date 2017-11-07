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
        //if value is at begin/center/end of array, return true
        if(value == values[start] || value == values[center] || value == values[end]) {
            return true;
        }
        //if center of sorted array is less than whats being searched for
        //the new start point will be at the center + 1
        if(values[center] < value) {
            start = center + 1;
        }
        //if center is greater, end point is center - 1
        else if(values[center] > value) {
            end = center - 1;
        }
    }

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    //Insertion sort...
    for(int i = 0; i < n; i++) {

        int key = values[i];
        int j = i - 1;

        while(j >= 0 && values[j] > key) {
            values[j + 1] = values[j];
            j = j - 1;
        }

        values[j + 1] = key;
    }
    return;
}

