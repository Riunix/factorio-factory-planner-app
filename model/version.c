/**
 * @Author: Tyler Fleming <Riunix>
 * @Date:   2018-04-26
 * @Email:  fleming.tj3@gmail.com
 * @Filename: version.c
 * @Last modified by:   Riunix
 * @Last modified time: 2018-04-26
 */



#include "version.h"

/*
 * return 1 if v1 > v2
 * return 0 if v1 = v2
 * return -1 if v1 < v2
 */

int cmpVersion(const char *v1, const char *v2)
{
    int i;
    int oct_v1[4], oct_v2[4];
    sscanf(v1, "%d.%d.%d.%d", &oct_v1[0], &oct_v1[1], &oct_v1[2], &oct_v1[3]);
    sscanf(v2, "%d.%d.%d.%d", &oct_v2[0], &oct_v2[1], &oct_v2[2], &oct_v2[3]);

    for (i = 0; i < 4; i++) {
        if (oct_v1[i] > oct_v2[i])
            return 1;
        else if (oct_v1[i] < oct_v2[i])
            return -1;
    }

    return 0;
}

int main()
{
    printf("%d\n", cmpVersion("0.1.2.3", "0.2.3.4"));
}
