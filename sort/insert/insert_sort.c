#include "insert_sort.h"
#include <stdio.h>

int
insert_sort(int *array, size_t size, int (*compare)(const void *element1, const void *elemenet2))
{
    if (array == NULL || compare == NULL)
    {
        return (-1);
    }
    
    int i, j;
    for (i = 1; i < (int)size; i++)
    {
        int current = array[i];

        /* 在有序数组中查找第一个比当前尚未排序的元素大(小)的元素 */
        for (j = i - 1; j >= 0; j--)
        {
            if (compare(&array[j], &current) <= 0)
            {
                break;
            }
            array[j + 1] = array[j];
        }

        /* 将当前元素插入到第一个比它小(大)的元素之后 */
        array[j + 1] = current;  /* 有可能array[j + 1]和array[i]是同一元素 */
    }
    return (0);
}
