#include<bits/stdc++.h>
#define  mod 1000000007
using namespace std;
long long power(long long a,long long b,long long m)
{
  if(b==0) return 1;
  else if(b%2==0) return power(a*a%m,b/2,m);
  else return power(a,b-1,m)*a%m;
}
int main() 
{
    long long t,n,k,ans;
    cin>>t;
    while(t--)
    {
     cin>>n>>k;
     // use formula for graph colouring i.e ans= k*((k-1)^(n-1))
     ans=power(k-1,n-1,mod);
     ans=(ans * (k%mod))%mod;
     cout<<ans<<endl;
    }
	return 0;
}
 