#include<stdio.h>
int main()
{
    int n, ans, i;
    while(scanf("%d", &n)!=EOF)
    {
        ans=0;
        for(i=1; i<=n; i++)
        {
            if(i%6 == 0 && i%12!=0)
                ans+=i;
        }
        printf("%d\n", ans);
    }
    return 0;
}

