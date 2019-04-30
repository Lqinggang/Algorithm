#include "myqsort.h"
#include <stdio.h>

int
myqsort(int *array, int begin, int end, int (*compare)(const void *element1, const void *elemenet2))
{
    if (array == NULL || compare == NULL)
    {
        return (-1);
    }

    if (begin >= end)
    {
        return (0);
    }

    int benchmark;
    benchmark = array[begin];

    int i;
    int j;
    i = begin;
    j = end;
    while (i < j)
    {
        while (j > i && compare(&array[j], &benchmark) >= 0)
        {
            --j;
        }
        if (i < j)
        {
           array[i++] = array[j];
        }
        while (i < j && compare(&array[i], &benchmark) < 0)
        {
            i++;
        }
        if (i < j)
        {
            array[j] = array[i];
        }
    }
    array[i] = benchmark;
    myqsort(array, begin, i - 1, compare);
    myqsort(array, i + 1, end, compare);
    return (0);
}
