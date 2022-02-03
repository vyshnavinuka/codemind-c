#include<stdio.h>
int main()
{
    int d,s=0,sqr,n;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        d=sqr%10;
        s+=d;
        sqr=sqr/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}