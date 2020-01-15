#include<stdio.h>
int main()
{
    double a, b;
    while(scanf("%lf", &a)!=EOF)
    {
        b = (int)((a*a*10)+0.5)/10.0;
        printf("%.1f\n", b);
    }

    return 0;
}
