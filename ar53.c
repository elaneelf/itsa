#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d)
        return -1;
      else if(c == d)
        return 0;
      else
        return 1;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), compare);
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);

    return 0;
}
