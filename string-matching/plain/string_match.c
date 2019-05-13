#include "string_match.h"
#include <string.h>

int
string_match(const char *main_string, const char *patern_string)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (*(main_string + i) != '\0' && *(patern_string + j) != '\0')
    {
        /* 当当前字符匹配时，主串和匹配串同时移动1位，匹配下一字符 */
        if (*(main_string + i) == *(patern_string + j))
        {
            i++;
            j++;
        }
        else  /* 失配时，匹配串从头开始比较，主串从之前已经匹配的字符后开始  */
        {
            i = i - (j - 1);
            j = 0;
        }
    }

    if (j == strlen(patern_string))
    {
        return (0);
    }
    return (-1);
}
