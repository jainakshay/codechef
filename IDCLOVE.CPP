#include <stdio.h>
int main()
{
int t;
long long n,mod,sum;
scanf("%d",&t);
while(t-->0)
{
scanf("%lld %lld",&n,&mod);
sum=((mod-1)*(mod))/2;
sum=sum*(n/mod);
n=n%mod;
sum=sum+(n*(n+1))/2;
printf("%lld\n",sum);
}
return 0;
}
