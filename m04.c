#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d-%d=%d\n", a, b, a-b);
    if(a < 0)
    {
        int r, q=a/b;
        if(b > 0)
            q = q-1;
        else
            q = q+1;
        r = a-(b*q);
        printf("%d/%d=%d...%d\n", a, b, q, r);
    }
    else
        printf("%d/%d=%d...%d\n", a, b, a/b, a%b);

    return 0;
}
