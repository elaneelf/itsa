#include<stdio.h>
int main()
{
    int n, ans, i;
    while(scanf("%d", &n)!=EOF)
    {
        if(n >= 35)
            printf("35");
        for(i=36; i<=n; i++)
        {
            if(i%5 == 0 && i%7 == 0)
                printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}

