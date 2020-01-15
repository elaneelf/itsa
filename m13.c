#include<stdio.h>
int main()
{
    int h1, h2, m1, m2;
    int d;
    int fee;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    d = (h2*60+m2)-(h1*60+m1);
    if(d/120==0 || (d/120==1 && d%120 ==0))
        fee = d/30*30;
    else if(d/240==0 || (d/240==1 && d%240 ==0))
        fee = 2*2*30 + (d-120)/30*40;
    else if(d/240 != 0)
        fee = 2*2*30 + 2*2*40 + (d-240)/30*60;

    printf("%d\n", fee);


    return 0;
}
