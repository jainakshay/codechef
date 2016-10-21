#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,n,m;
    cin>>t;
    while(t--)
    {
     cin>>n>>m;
     if(n==1 && m>2)
     cout<<"No\n";
     else if(m==1 && n>2)
     cout<<"No\n";
     else if(n%2==0 || m%2==0)
     cout<<"Yes\n";
     else
     cout<<"No\n";
    }
	return 0;
}
 