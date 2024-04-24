#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 10000

int main()
{
    char a[max_size+1];
    scanf("%s",a);

    lli ctr[26] = {0};
    memset(ctr, 0, sizeof(ctr));
    
    for (lli i = 0; i < strlen(a); i++)
    {
        ctr[a[i] - 'a']++;
    }

    for (lli i = 0; i < 26; i++)
    {
        if (ctr[i] != 0)
        {
            printf("%c : %lld\n",'a'+i, ctr[i]);
        }
        ctr[i] = 0;
    }

    return 0;
}