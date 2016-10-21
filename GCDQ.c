#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
long gcd(long a,long b)
{
    if(b==0)
    return a;
    else
    return(gcd(b,a%b));
}
int main()
{
  long t,n,q,l,r,a[100001],i,g1,g2,g,p[100001],s[100001],k;
  scanf("%ld",&t);
  while(t--)
  {
      scanf("%ld %ld",&n,&q);
      for(i=1;i<=n;i++)
      scanf("%ld",&a[i]);
      g=a[1];
      for(i=1;i<=n;i++)
      {
          g=gcd(a[i],g);
          p[i]=g;
      }
      g=a[n];
      k=1;
      for(i=n;i>=1;i--)
      {
          g=gcd(a[i],g);
          s[k++]=g;
      }
      while(q--)
      {
          scanf("%ld %ld",&l,&r);
          if(l==1)
          g=s[n-r];
          else if(r==n)
          g=p[l-1];
          else
          {
          g1=p[l-1];
          g2=s[n-r];
          g=gcd(g1,g2);
          }
          printf("%ld\n",g);
      }
  }
	return 0;
}

