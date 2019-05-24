#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble.h"

#define BUFFSIZE    10

int
compare(const void *element1, const void *element2)
{
    return (*(int *)element1 - *(int *)element2);  /* descending */
//    return (*(int *)element2 - *(int *)element1);  /* ascending */
}

void
printf_array(int *array, size_t size)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int
main(void)
{
    srand(time(NULL));
    int array[BUFFSIZE];
    int array_qsort[BUFFSIZE];
    int i;
    for (i = 0; i < BUFFSIZE; i++)
    {
        array[i] = rand() % 1001;
//        array[i] = -i;  /* 最好情况 */
//        array[i] = i;   /* 最外情况 */
        array_qsort[i] = array[i];
    }

    printf("\nBefore sorting: \n");
    printf_array(array, BUFFSIZE);

    bubble(array, BUFFSIZE, compare);
    printf("\nAfter inserting sort: \n");
    printf_array(array, BUFFSIZE);

    qsort(array_qsort, sizeof(array_qsort) / sizeof(int), sizeof(int), compare);
    printf("\nAfter quick sorting: \n");
    printf_array(array_qsort, BUFFSIZE);
    printf("\n");

    return (0);
}
