#include <stdio.h>
int main()
{
	long long t,n;
	scanf("%lld",&t);
	while(t--)
	{
	   scanf("%lld",&n);
	   if(n%2==0)
	   printf("%lld\n",n);
	   else
	   printf("%lld\n",--n);
	}
	return 0;
}

