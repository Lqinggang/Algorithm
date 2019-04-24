#ifndef ALGORITHM_SORT_BUBBLE_H
#define ALGORITHM_SORT_BUBBLE_H

#include <stddef.h>

/*
 * The compare function return value:
 * < 0: descending
 * > 0: ascending
 */
extern int bubble(int *array, size_t size, int (*compare)(int element1, int elemenet2));

#endif
