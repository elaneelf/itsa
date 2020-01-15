#include<stdio.h>
int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);
    int ro, co;
    scanf("%d %d", &ro, &co);
    int b[ro][co];
    for(i=0; i<ro; i++)
        for(j=0; j<co; j++)
            scanf("%d", &b[i][j]);
    int ans[r][co];
    for(i=0; i<r; i++)
    {
        for(j=0; j<co; j++)
        {
            ans[i][j]=0;
            for(int k=0; k<ro; k++)
                ans[i][j]+= a[i][k] * b[k][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<co; j++)
        {

            printf("%d", ans[i][j]);
            if(j<co-1)
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}


