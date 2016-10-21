#include <stdio.h>
int main()
{
	long long a[100001],n,t,i,count;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    count=0;
	    for(i=1;i<n-1;i++)
	    {
	        if(a[i]!=a[i+1] || a[i]!=a[i-1])
	        count++;
	    }
	    if(a[0]!=a[1])
	    count++;
	    if(a[n-2]!=a[n-1])
	    count++;
	    printf("%lld\n",count);
	}
	return 0;
}

