#include<stdio.h>
int main()
{
    int s=0,m=1,n,k,res;
    scanf("%d",&n);
    while(n!=0)
    {
        k=n%10;
        s=s+k;
        m=m*k;
        n=n/10;
    }
res=m-s;
printf("%d",res);
}