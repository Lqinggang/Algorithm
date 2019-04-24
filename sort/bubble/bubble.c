#include "bubble.h"
#include <stdio.h>

//static void
//printf_array(int *array, size_t size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//    {
//        printf("%d ", *(array + i));
//    }
//}



int
bubble(int *array, size_t size, int (*compare)(int element1, int elemenet2))
{
    if (array == NULL || compare == NULL)
    {
        return (-1);
    }
    
    int k = 0;
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size - i; j++)
        {
            if (compare(array[j - 1], array[j]) < 0)
            {
                array[j - 1] = array[j - 1] ^ array[j];
                array[j] = array[j - 1] ^ array[j];
                array[j - 1] = array[j - 1] ^ array[j];
            }
//            printf("%d): ", k++);
//            printf_array(array, size);
//            printf("\n");
        }
    }
    return (0);
}
