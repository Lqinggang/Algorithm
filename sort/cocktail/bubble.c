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
bubble(int *array, size_t size, int (*compare)(const void *element1, const void *elemenet2))
{
    if (array == NULL || compare == NULL)
    {
        return (-1);
    }
    
    size_t i, j;
    int exchange;
    for (i = 0; i < size; i++)
    {
        exchange = 0;
        for (j = 1; j < size - i; j++)  /* size - i 之后已经排好序 */
        {
            if (compare(&array[j - 1], &array[j]) >= 0)
            {
                array[j - 1] = array[j - 1] ^ array[j];
                array[j] = array[j - 1] ^ array[j];
                array[j - 1] = array[j - 1] ^ array[j];
                exchange = 1;
            }
        }

        if (exchange == 0)  /* 未排序部分没有进行交换，说明已经排好序 */
        {
            break;
        }
    }
    printf("total number of cycles(bubble): %d\n", (int)i + 1);
    return (0);
}
