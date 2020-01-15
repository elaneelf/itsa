#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        if(n<100)
        {
            if(n%4 == 0)
                printf("Bissextile Year\n");
            else
                printf("Common Year\n");
        }
        else if(n>=100 && n<400)
        {
            if(n%4 == 0 && n%100 != 0)
                printf("Bissextile Year\n");
            else
                printf("Common Year\n");
        }
        else
        {
            if( (n%4 == 0 && n%100 != 0) || (n%400 == 0) )
                printf("Bissextile Year\n");
            else
                printf("Common Year\n");
        }
    }
    return 0;
}



