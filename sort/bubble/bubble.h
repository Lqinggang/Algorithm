#ifndef ALGORITHM_SORT_BUBBLE_H
#define ALGORITHM_SORT_BUBBLE_H

#include <stddef.h>

/*
 * The compare function return value:
 * < 0: descending
 * > 0: ascending
 */
extern int bubble(int *array, size_t size, int (*compare)(const void *element1, const void *elemenet2));

#endif  /* ALGORITHM_SORT_BUBBLE_H */
