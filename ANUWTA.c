//PROBLEM CODE:ANUWTA
#include <stdio.h>
int main()
{
  long long dist,t,n;
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld",&n);
      dist=n+((n*(n+1))/2);
      printf("%lld\n",dist);
  }
	return 0;
}
