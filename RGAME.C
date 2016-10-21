/***********************************************************
AIM:https://www.codechef.com/JAN16/problems/RGAME
AUTHOR: AKSHAY JAIN
DATE: 10/01/2016
STATUS: AC
SCORE: 100
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>   
#include<stdlib.h>
#define mod 1000000007
int main() 
{
    long long a[100010],b[100010],c[100010],i,sum,t,ans,n,k;
    scanf("%lld",&t);
    c[0]=1;c[1]=2;
    for(i=2;i<100010;i++)
    {
        c[i]=(c[i-1]*2)%mod;
    }
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<=n;i++)
        scanf("%lld",&a[i]);
        b[0]=a[0];
        for(i=1;i<=n;i++)
        {
        b[i]=c[n-i];
        b[i]=((b[i]%mod)*(a[i]%mod))%mod;
        }
        sum=0;ans=0;
        for(i=n;i>=0;i--)
        {
            sum=((sum%mod)+(b[i]%mod))%mod;
            b[i]=sum;
          // printf("%lld ",b[i]);
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                ans=( ans%mod + ( a[i]*b[i+1])%mod) %mod;
                ans=((ans%mod)*(2%mod))%mod;
            }
            else
            {
                k= (((a[i]*b[i+1])%mod)*c[i])%mod;
                ans= ((ans%mod)+(k%mod))%mod;
            }
        }
        printf("%lld\n",ans);
    }
	return 0;
}
  