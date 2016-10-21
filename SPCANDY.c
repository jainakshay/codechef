#include <stdio.h>
int main()
{
  unsigned long long r,t,n,k,r1;
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld %lld",&n,&k);
      if(k==0)
      {
        r=n;
        r1=0;
      }
      else
      {
      r=n%k;
      r1=n/k;
      }
      printf("%lld %lld\n",r1,r);
  }
	return 0;
}

