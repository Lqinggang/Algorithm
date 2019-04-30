#ifndef ALGORITHM_SORT_QSORT_H
#define ALGORITHM_SORT_QSORT_H

/*
 * The compare function return value:
 * > 0: ascending
 * < 0: descending
 */
extern int myqsort(int *array, int begin, int end, int (*compare)(const void *element1, const void *elemenet2));

#endif
