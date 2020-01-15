#include<stdio.h>
int main()
{
    int m, t;
    while(scanf("%d", &m)!=EOF)
    {
        t = m*1000/238;
        if(m*1000%238!=0)
            printf("%d\n", t+1);
        else
            printf("%d\n", t);
    }


    return 0;
}
