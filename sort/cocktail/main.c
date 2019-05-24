#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble.h"
#include "cocktail.h"

#define BUFFSIZE    20

static int
compare(const void *element1, const void *element2)
{
//    return (*(int *)element2 - *(int *)element1);  /* descending */
    return (*(int *)element1 - *(int *)element2);  /* ascending */
}

static void
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
    int array_bubble[BUFFSIZE];
    int i;
    for (i = 0; i < BUFFSIZE; i++)
    {
//        array[i] = rand() % 1001;
        array[i] = i;
        array_qsort[i] = array[i];
        array_bubble[i] = array[i];
    }
    array[i - 1] = -1;
    array_qsort[i - 1] = array[i - 1];
    array_bubble[i - 1] = array[i - 1];

    printf("\nBefore sorting: \n");
    printf_array(array, BUFFSIZE);

    printf("\nAfter bubble sorting: \n");
    bubble(array_bubble, BUFFSIZE, compare);
    printf_array(array_bubble, BUFFSIZE);

    printf("\nAfter cocktail sorting: \n");
    cocktail(array, BUFFSIZE, compare);
    printf_array(array, BUFFSIZE);

    printf("\nAfter quick sorting: \n");
    qsort(array_qsort, sizeof(array_qsort) / sizeof(int), sizeof(int), compare);
    printf_array(array_qsort, BUFFSIZE);
    printf("\n");

    return (0);
}
