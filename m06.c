#include<stdio.h>
int main()
{
    int a;
    double b;
    while(scanf("%d", &a)!=EOF)
    {
        b = (int)((a*1.6*10)+0.5)/10.0;
        printf("%.1f\n", b);
    }

    return 0;
}

