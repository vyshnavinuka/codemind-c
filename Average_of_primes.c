#include<stdio.h>
int main()
{
    int n,i,j;
    float sum=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        //printf("%d ",ar[i]);
    }
    int c=0,l=0;
    //printf("

    for(i=0;i<n;i++)
    {
        c=0;
        if(ar[i]==1)
        c=1;
            for(j=2;j<ar[i];j++)
            {
                    if(ar[i]%j==0)
                    {
                        c++;
                        break;
                    }
            }
        if(c==0)
        {
            //printf("%d ",ar[i]);
            sum=sum+ar[i];
            l++;
        }
    }
   // printf("

    float z=sum,y=l,x;
    x=z/l;
    printf("%.2f",x);
}