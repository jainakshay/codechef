//PROBLEM CODE:MAXDIFF
#include <stdio.h>
#include<stdlib.h>
long compare(const void*a,const void*b)
{
    return (*(long*)a -*(long*)b);
}
int main()
{
    long t,k,n,w[101],i,d,sum,summin,summax,sbp1,scp1,sbp2,scp2,d1,d2;
    scanf("%ld",&t);
    while(t--)
    {
        sum=0;summin=0;summax=0;
        scanf("%ld %ld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%ld",&w[i]);
            sum+=w[i];
        }
        qsort(w,n,sizeof (long),compare);
        for(i=0;i<k;i++)
        summin+=w[i];
        sbp1=summin;
        scp1=sum-summin;
        d1=abs(sbp1-scp1);
        for(i=n-1;i>=n-k;i--)
        summax+=w[i];
        sbp2=sum-summax;
        scp2=summax;
        d2=abs(sbp2-scp2);
        d=d1>=d2?d1:d2;
        printf("%ld\n",d);
    }
	return 0;
}

