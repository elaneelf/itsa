#include<stdio.h>

int main()
{
    int a, b;
    while(scanf("%d", &a)!=EOF)
    {
        printf("%d %d %d\n", a, a*a, a*a*a);
    }

    return 0;
}
