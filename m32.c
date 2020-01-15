#include<stdio.h>
int main()
{
    int n, a, b, c, i;
    while(scanf("%d", &n)!=EOF)
    {
        a = n/100;
        b = n%100/10;
        c = n%100%10;
        if(a*a*a + b*b*b + c*c*c == n)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}


