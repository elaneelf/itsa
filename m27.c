#include<stdio.h>
int main()
{
    int a, b, n, ans, i;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        if(a<b)
            n = b - a + 1;
        else
            n = a - b + 1;
        ans=0;
        ans = n*(a + b)/2;
        printf("%d\n", ans);
    }
    return 0;
}

