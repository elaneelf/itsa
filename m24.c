#include<stdio.h>
int main()
{
    double h, m, fee;
    while(scanf("%lf %lf", &h, &m)!=EOF)
    {
        if(h<=60)
            fee = h*m;
        else if(h>60 && h<=120)
            fee = m*(h-60)*1.33 + 60*m;
        else
            fee = m*(h-120)*1.66 + 60*m*1.33 + 60*m;
        printf("%.1f\n", fee);
    }

    return 0;
}


