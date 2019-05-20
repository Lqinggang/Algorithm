#ifndef ALGORITHM_SORT_INSERT_H
#define ALGORITHM_SORT_INSERT_H

#include <stddef.h>

extern int insert_sort(int *array, size_t size, int (*compare)(const void *element1, const void *elemenet2));

#endif  /* ALGORITHM_SORT_INSERT_H */
