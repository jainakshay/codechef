#include <stdio.h>
int main()
{
	long long o,m,n,a[100001],i,j,t,count;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld %lld %lld",&n,&m,&o);
	    for(i=1;i<=n;i++)
	    scanf("%lld",&a[i]);
	    if(a[1]>=o)
	    {
	        count=0;
	    for(i=1;i<=n;i++)
	    {
	        if(a[i]>=o)
	        count++;
	    }
	    }
	    else
	    count=-1;
	    if(count>m)
	    printf("%lld\n",m);
	    else
	    printf("%lld\n",count);
	}
	return 0;
}

