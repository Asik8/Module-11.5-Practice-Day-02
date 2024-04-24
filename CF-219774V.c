#include <stdio.h>
#include <math.h>
#include <string.h>

#define lli long long int
#define max_size 10000

int main()
{
    lli a,m ;
    scanf("%lld %lld",&a,&m);
    lli cnt[100000] = {0};
    lli ar[a];
    for(lli i=0;i<a;i++)
    {
        scanf("%lld",&ar[i]);
        cnt[ar[i]]++;
    }
    
    for(lli i=1;i<=m;i++)
    {
        if(cnt[i]!=0)
            printf("%lld\n",cnt[i]);
    }

    return 0;
}