#include "cocktail.h"
#include <stdio.h>

int
cocktail(int *array, size_t size, int (*compare)(const void *element1, const void *elemenet2))
{
    if (array == NULL || compare == NULL)
    {
        return (-1);
    }
    
    int i, j;
    int exchange;
    for (i = 0; i < (int)size / 2; i++)
    {
        exchange = 0;
        for (j = 1; j < (int)size - i; j++)  /* size - i 之后已经排好序 */
        {
            if (compare(&array[j - 1], &array[j]) > 0)
            {
                array[j - 1] = array[j - 1] ^ array[j];
                array[j] = array[j - 1] ^ array[j];
                array[j - 1] = array[j - 1] ^ array[j];
                exchange = 1;
            }
        }

        for (j = size - i - 1; j > 0; j--)  /* size - i 之后已经排好序 */
        {
            if (compare(&array[j], &array[j - 1]) <= 0)
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
    printf("Total number of cycles(cocktail): %d\n", i * 2);
    return (0);
}
