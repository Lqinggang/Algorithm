#include "kmp.h"
#include <stdio.h>
#include <string.h>

/*
 * 获取next失配数组
 * */
static int *
get_next(const char *patern_string, int *next)
{
    if (patern_string == NULL || next == NULL || strlen(patern_string) == 0)
    {
        return (NULL);
    }

    int i = 0;  /* 匹配串前缀索引 */
    int j = 1;  /* 匹配串后缀索引 */
    next[i] = 0;
    while (patern_string[j] != '\0')
    {
        if (patern_string[i] == patern_string[j])
        {
            ++i;
        }
        else if (patern_string[j] == patern_string[0])
        {
            i = 1;
        }
        else
        {
            i = 0;
        }
        next[j] = i;
        ++j;
    }
        
    return (next);
}

/*
 * 字符串匹配
 * >0:匹配的位置(从1开始)
 * -1:(不匹配)
 */
int
kmp(const char *main_string, const char *patern_string)
{
    if (main_string == NULL  || patern_string == NULL)
    {
        return (-1);
    }
    int length = strlen(patern_string);
    int next[length];
    get_next(patern_string, next);  /* 获取失配数组 */

    int i = 0;
    int j = 0;
    while (main_string[i] != '\0' && patern_string[j] != '\0')
    {
        if (main_string[i] == patern_string[j])  /* 当前字符匹配时，同时移动到下一个需要比较的字符 */
        {
            ++j;
            ++i;
        }
        else if (j == 0)  /* 第一个字符失配时，主串移动到下一字符，匹配串从0开始 */
        {
            i++;
        }
        else  /* 主串不移动，匹配串从失配数组中获取当前需要从哪一个字符开始比较的索引 */
        {
            j = next[j - 1]; 
        }
    }
    if (patern_string[j] == '\0')
    {
        return (i - j + 1);
    }
    return(-1);
}
