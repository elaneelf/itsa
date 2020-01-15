#include<stdio.h>
int main()
{
    int r, c, i, j, x;
    scanf("%d %d", &r, &c);
    int a[r][c];
    x = r*c;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d", x);
            if(j<c-1)
                printf(" ");
            x--;
        }
        printf("\n");
    }


    return 0;
}



