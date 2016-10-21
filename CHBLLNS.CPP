#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long ans,r,g,b,t,k;
    cin>>t;
    while(t--)
    {
     ans=0;
     cin>>r>>g>>b;
     cin>>k;
     if(r<(k-1))
     ans+=r;
     else
     ans+=(k-1);
     
     if(g<(k-1))
     ans+=g;
     else
     ans+=(k-1);
     
     if(b<(k-1))
     ans+=b;
     else
     ans+=(k-1);
     ans++;
     cout<<ans<<endl;
    }
  
	return 0;
}
 