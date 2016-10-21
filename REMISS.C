#include <stdio.h>
#define max(a,b) a>b?a:b
int main()
{
	long t,a,b;
	scanf("%ld",&t);
	while(t--)
	{
	    scanf("%ld %ld",&a,&b);
	    printf("%ld %ld\n",max(a,b),a+b);
	}
	return 0;
}

