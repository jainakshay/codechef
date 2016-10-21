#include<bits/stdc++.h>
using namespace std;
map<long long, long long> val;
long long max(long long a,long long b)
{
    return ((a>b)?a:b);
}
long long coin(long long n)
{
    //Base case 
    if(n==0)
    return 0;
    long long p=n;
    if(val[n]==0)
    {
    val[n]=max(p,coin(p/2)+coin(p/3)+coin(p/4));
    }
    return val[n];
}
int main() 
{
  long long n;
  while(cin>>n)
  cout<<coin(n)<<endl;
	return 0;
} 