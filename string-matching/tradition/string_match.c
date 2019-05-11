#include "string_match.h"
#include <string.h>

int
string_match(const char *main_string, const char *patern_string)
{
    int i = 0;
    int j = 0;

    while (*(main_string + i) != '\0')
    {
        int k;
        j = 0;
        k = i;

        while (*(patern_string + j) != '\0')
        {
            if (*(main_string + i) != *(patern_string + j))
            {
                break;
            }
            i++;
            j++;
        }

        if (*(patern_string + j) == '\0')
        {
            return (0);
        }
        i = ++k;
    }
    return (-1);

//    int main_string_length, pattern_string_length;
//    main_string_length = strlen(main_string);
//    pattern_string_length = strlen(patern_string);
//
//    for (i = 0; i < main_string_length; i++)
//    {
//        int k;
//        k = i;
//        for (j = 0; j < pattern_string_length; )
//        {
//            if (*(main_string + i) != *(patern_string + j))
//            {
//                break;
//            }
//            i++;
//            j++;
//        }
//
//        if (*(patern_string + j) == '\0')
//        {
//            return (0);
//        }
//        i = k;
//    }
//    return (-1);
}
