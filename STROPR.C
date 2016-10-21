/***********************************************************
AIM:https://www.codechef.com/FEB16/problems/STROPR
AUTHOR: AKSHAY JAIN
DATE: 06/02/2016
STATUS: AC
SCORE: 100
REFER: http://codeforces.com/blog/entry/5679 Using Fermat's little theorem 
***********************************************************/
//Code goes here..!!
#include<stdio.h>
#define mod 1000000007
unsigned long long pow(unsigned long long a,unsigned long long b,unsigned long long m)
{
  if(b==0) return 1;
  else if(b%2==0) return pow(a*a%m,b/2,m);
  else return pow(a,b-1,m)*a%m;
}
int main() 
{
  unsigned long long n,m,t,a[100001],b[100001],x,j,k,ans,i;
  scanf("%llu",&t);
  while(t--)
  {
      ans=0;
      scanf("%llu %llu %llu",&n,&x,&m);
      b[0]=1;
      m%=mod;
      for(i=1;i<=x;i++)
      {
          k=(((m+i-1)%mod) * (pow(i,mod-2,mod) % mod))%mod;
          b[i]= (b[i-1]*k)%mod;
      }
      for(i=0;i<n;i++)
      {
      scanf("%llu",&a[i]);
      a[i]%=mod;
      }
      k=x-1;
      for(i=0;i<x;i++)
      {
        ans=(ans+((a[k--])*b[i])%mod)%mod;
      }
      printf("%llu\n",ans);
  }
	return 0;
}
