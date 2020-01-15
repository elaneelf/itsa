#include<stdio.h>
int main()
{
    long long int n, a, i;
    while(scanf("%lld", &n)!=EOF)
    {
        i=0;
        for(a=2; a<n; a++)
        {
            if(n % a == 0)
            {
                i=0;
                printf("NO\n");
                break;
            }
            else
            {
                i++;
            }
        }
        if(i != 0)
        {
            printf("YES\n");
        }

    }


    return 0;
}

