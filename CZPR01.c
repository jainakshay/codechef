#include <stdio.h>
int main()
{
  long t,n,k,sum;
	scanf("%ld",&t);
	while(t--)
	{
	    scanf("%ld %ld",&n,&k);
	    sum=((n*(n+1))/2)-k;
	    if(sum<=2)
	   {
	    printf("-1\n");
	   }
	    else
	    printf("%ld\n",--sum);
	}
	return 0;
}

