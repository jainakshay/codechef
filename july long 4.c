#include<limits.h>
#include<math.h> 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/**************************************************************
long long partition(long long a[],long long start,long long end)
{
    long long p,temp,i,j,s=-1;
    p=a[end];
    for(i=start;i<=end;i++)
    {
        if(a[i]<p)
        {
            start++;
            temp=a[start];
            a[start]=a[i];
            a[i]=a[temp];
        }
    }
    start++;
    temp=a[start];
    a[start]=a[end]
    a[end]=temp;
    return start;
}
void quick(long long a[],long long start,long long end)
{
}
*********************************************************************/
int main() 
{
    long long t,n,sum,m,k,c[100001],l[100001],r[100001];
    long long val[100001],a[100001],s[100001],i,j,max,cmax,pmax;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        memset(s,0,sizeof(s));
        scanf("%lld %lld %lld",&n,&k,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
            s[i]=sum;
        }
        max=LONG_MIN;
        for(i=1;i<=m;i++)
        {
            scanf("%lld %lld %lld",&l[i],&r[i],&c[i]);
            if(c[i]>k)
            {
            l[i]=0;
            r[i]=0;
            val[i]=sum;
            }
            else
            val[i]=sum-(s[r[i]]-s[l[i]-1]);
            if(val[i]>=max)
            {
                max=val[i];
                pmax=i;
                cmax=c[i];
            }
        }
        printf("%lld\n",max);
    }
	return 0;
}
 