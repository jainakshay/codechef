#include <stdio.h>
int main()
{
	unsigned long long t,n,count;
	scanf("%lld",&t);
	while(t--)
	{
	    count=0;
	    scanf("%lld",&n);
	    while(n)
	    {
	        if(n%10==4)
	        count++;
	        n/=10;
	    }
	    printf("%lld\n",count);
	}
	return 0;
}
