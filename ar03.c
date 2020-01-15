#include<stdio.h>
int main()
{
    long long int ans=0;
    int a[6];
    for(int i=0; i<6; i++)
        scanf("%d", &a[i]);
    for(int i=5; i>=0; i--)
        ans += a[i]*a[i]*a[i];
    printf("%lld\n", ans);



    return 0;
}

