//PROBLEM CODE:CBARG
#include <stdio.h>
int main()
{
  long long t,a[100000],n,i,count,mem;
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld",&n);
      for(i=0;i<n;i++)
      scanf("%lld",&a[i]);
      mem=a[0];
      for(i=1;i<n;i++)
      {
      if(a[i]>a[i-1])
      {
          mem+=a[i]-a[i-1];
      }
      }
      printf("%lld\n",mem);
  }
	return 0;
}
