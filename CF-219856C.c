#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    char a[21],b[21];
    scanf("%s %s",a,b);
    int alen = strlen(a);
    int blen = strlen(b);

    if(strlen(a)<strlen(b))
    {
        for(int i=0;i<strlen(a);i++)
            printf("%c",a[i]);
        printf("\n");
    }
    else
    {
        for(int i=0;i<strlen(b);i++)
            printf("%c",b[i]);
        printf("\n");
    }

    return 0;
}