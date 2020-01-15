#include<stdio.h>
long long int fac(long long int a)
{
    if(a == 1 || a==0)
        return 1;
    return a*fac(a-1);
}

int main()
{
    int x;
    while(scanf("%d", &x)!=EOF)
    {
        long long int ans = fac(x);
        printf("%lld\n", ans);
    }
}
