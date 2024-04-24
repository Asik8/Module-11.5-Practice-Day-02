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
    lli a,m ;
    scanf("%lld %lld",&a,&m);
    lli ctr[m+1] = {0};
    lli ar[a];
    for(lli i=0;i<a;i++)
    {
        scanf("%lld",&ar[i]);
        ctr[ar[i]]++;
    }
    
    for(lli i=1;i<=b;i++)
    {
        if(ctr[i]!=0)
            printf("%lld\n",ctr[i]);
    }

    return 0;
}