#include<stdio.h>
int main()
{
    int i;
    long long int ans;
    while(scanf("%d", &i)!=EOF)
    {
        if(i==0)
            printf("1\n");
        else if(i > 31)
            printf("Value of more than 31\n");
        else
        {
            ans = 2;
            for(int count=1; count<i; count++)
            {
                ans *= 2;
            }
            printf("%lld\n", ans);
        }

    }




    return 0;
}
