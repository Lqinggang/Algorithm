#include <stdio.h>
#include <string.h>
#include "string_match.h"

int
main(void)
{
    const char str[][64][64] = {
        {"main string", "patern string"},
        {"This is a string.", "no match"},
        {"Hello, World!", ", Wo"},
        {"ababcabcacbab", "abcac"},
        {"abcbabcbacba", "bcbcab"},
        {"nanancnandfasd", "ncanda"},
        {"Not match", "mat"},
        {"1f0jasdfj0we90ffjasle09q", "owe90"},
        {"", ""}  /* end */
    };

    int i = 0;
    while (strcmp(str[i][0], "") != 0 && strcmp(str[i][1], "") != 0)
    {
        if (string_match(str[i][0], str[i][1]) == 0)
        {
            printf("%-10s\"%s\" : \"%s\"\n", "match:", str[i][0], str[i][1]);
        }
        else
        {
            printf("%-10s\"%s\" : \"%s\"\n", "no match:", str[i][0], str[i][1]);
        }
        i++;
    }

    return (0);
}
