#include<stdio.h>
int main()
{
    int down, h;
    int b;
    while(scanf("%d %d", &down, &h)!=EOF)
    {
        b = down*h;
        if(b%2 != 0)
            printf("%d.5\n", b/2);
        else
            printf("%d.0\n", b/2);
    }

    return 0;
}


