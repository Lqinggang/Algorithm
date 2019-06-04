#include <stdio.h>
#include <string.h>
#include "kmp.h"

int
main(void)
{
    char str[2][4096];
    char buffer[8192];

    int i = 0;
//    printf("main string\t\t\tpatern string\n");
//    main string: str[0]
//    patern string: str[1]
    while (NULL != fgets(buffer, sizeof(buffer), stdin))
    {
        sscanf(buffer, "%s %s", str[0], str[1]);
        /* kmp */
        int position;
        if ((position = kmp(str[0], str[1])) >= 0)
        {
            printf("match(pos = %d)(k): \"%s\" : \"%s\"\n", position, str[0], str[1]);
        }
        else
        {
            printf("not match(pos = %d)(k): \"%s\" : \"%s\"\n", position, str[0], str[1]);
        }

        /* strstr */
        char *tmp = NULL;
        if ((tmp = strstr(str[0], str[1])) != NULL)
        {
            printf("match(pos = %d)(s): \"%s\" : \"%s\"\n", (int)(tmp - str[0]) + 1, str[0], str[1]);
        }
        else
        {
            printf("not match(pos = %d)(s): \"%s\" : \"%s\"\n", -1, str[0], str[1]);
        }

        memset(buffer, 0, sizeof(buffer));
        memset(str[0], 0, sizeof(str[0]));
        memset(str[1], 0, sizeof(str[1]));
        i++;

    }
    

    return (0);
}
