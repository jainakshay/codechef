#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long long t,s,x;
  cin>>t>>s>>x;
  x-=t;
  if(x==1 || x<0)
  cout<<"NO\n";
  else if(x%s==0 || x%s==1)
  cout<<"YES\n";
  else
  cout<<"NO\n";
	return 0;
}
 