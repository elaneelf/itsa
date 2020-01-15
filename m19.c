#include<stdio.h>
int main()
{
    double m, fee;
    while(scanf("%lf", &m)!=EOF)
    {
        if(m<=800)
            fee = m*0.9;
        else if(m>800 && m<1500)
            fee = m*0.9*0.9;
        else
            fee = m*0.9*0.79;
        printf("%.1f\n", fee);
    }

    return 0;
}

