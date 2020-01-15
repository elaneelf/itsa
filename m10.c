#include<stdio.h>
int main()
{
    double a, b;
    while(scanf("%lf", &a)!=EOF)
    {
        b = (a*9/5)+32.0;
        b = (int)(b*10+0.5)/10.0;
        printf("%.1f\n", b);
    }

    return 0;
}

