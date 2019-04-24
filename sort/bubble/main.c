#include <stdio.h>
#include <time.h>
#include "bubble.h"

#define BUFFSIZE    10

int
compare(int element1, int element2)
{
    return (element1 - element2);  /* descending */
//    return (element2 - element1);  /* ascending */
}

void
printf_array(int *array, size_t size)
{
    int i;
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
    int i;
    for (i = 0; i < BUFFSIZE; i++)
    {
        array[i] = rand() % 1001;
    }
    printf("before sorting: ");
    printf_array(array, BUFFSIZE);
    printf("\n");

    bubble(array, BUFFSIZE, compare);

    printf("after sorting: ");
    printf_array(array, BUFFSIZE);
    printf("\n");

    return (0);
}
