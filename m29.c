#include<stdio.h>
int main()
{
    int n, i, j, flag;
    while(scanf("%d", &n)!=EOF)
    {
        flag=0;
        for(i=n-1; i>1; i--)
        {
            if(flag == 1)
                break;
            for(j=2; j<i; j++)
            {
                if(i%j == 0)
                    break;
                if(j == i-1)
                {
                    printf("%d\n", i);
                    flag = 1;
                    break;
                }
            }
        }
    }
    return 0;
}
