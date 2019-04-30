#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "myqsort.h"

#define BUFFSIZE    20

int
compare(const void *element1, const void *element2)
{
//    return (element1 - element2);  /* descending */
    return (*(int *)element2 - *(int *)element1);  /* ascending */
}

void
printf_array(int *array, size_t size)
{
    size_t i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
}

int
main(void)
{
    srand(time(NULL));
    int array[BUFFSIZE];
    int tmp[BUFFSIZE];
    int i;
    for (i = 0; i < BUFFSIZE; i++)
    {
        tmp[i] = array[i] = rand() % 1001;
    }
    printf("before sorting: ");
    printf_array(array, BUFFSIZE);
    printf("\n");

    myqsort(array, 0, BUFFSIZE - 1, compare);
    qsort(tmp, sizeof(tmp) / sizeof(int), sizeof(int), compare);  /* stdlib */

    printf("after sorting(myqsort): ");
    printf_array(array, BUFFSIZE);
    printf("\n");
    printf("after sorting(qsort):   ");
    printf_array(tmp, BUFFSIZE);
    printf("\n");

    return (0);
}
