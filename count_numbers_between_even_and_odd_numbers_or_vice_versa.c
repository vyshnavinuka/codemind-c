#include<stdio.h>
int main()
{
    int n,a,i;
    int s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+2<n)
        {
            if(ar[i]%2==1 && ar[i+2]%2==0 || ar[i]%2==0 && ar[i+2]%2==1)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}