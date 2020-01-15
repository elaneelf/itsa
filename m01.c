#include<stdio.h>
int main()
{
    int up, down, h;
    int b;
    while(scanf("%d %d %d", &up, &down, &h)!=EOF)
    {
        b = (up+down)*h;
        if(b%2 != 0)
            printf("Trapezoid area:%d.5\n", b/2);
        else
            printf("Trapezoid area:%d.0\n", b/2);
    }

    return 0;
}

