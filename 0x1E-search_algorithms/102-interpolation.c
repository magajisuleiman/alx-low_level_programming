#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        the Interpolation Search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1; /* Array is NULL or empty, return -1 */
    }

    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        /* Calculate the probe position */
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Comparing with array[%zu] = %d\n", pos, array[pos]);

        if (array[pos] == value) {
            return pos; /* Value found */
        } else if (array[pos] < value) {
            low = pos + 1; /* Adjust the search range to the right */
        } else {
            high = pos - 1; /* Adjust the search range to the left */
        }
    }

    return -1; /* Value not found */
}
