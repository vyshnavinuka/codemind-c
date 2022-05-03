#include<stdio.h>
int maxhandshakes(int n)
{
    return(n*(n-1)/2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",maxhandshakes(n));
    return 0;
}