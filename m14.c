#include<stdio.h>
int main()
{
    int sec;
    int d, h, m, s;
    scanf("%d", &sec);
    d = sec/86400;
    h = sec%86400/3600;
    m = sec%86400%3600/60;
    s = sec%86400%3600%60;

    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", d, h, m, s);


    return 0;
}

