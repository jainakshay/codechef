#include<stdio.h>
int main()
{
long long x[50000],i,n,a[50000],sum,t;
scanf("%d",&t);
while(t--)
{
    sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    sum=sum/(n-1);
    for(i=0;i<n;i++)
    {
        x[i]=sum-a[i];
        printf("%lld ",x[i]);
    }
    printf("\n");
}
return 0;
}
