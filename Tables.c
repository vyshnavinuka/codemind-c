#include<stdio.h>
int main()
{
    int tab,a,b,n,i;
    scanf("%d %d",&n,&tab);
    for(i=1;i<=tab;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
    return 0;
}