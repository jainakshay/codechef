#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long long t,n,a[100001],count,i;
  a[1]=1;
  for(i=2;i<=100000;i++)
  a[i]=(i*(i+1))/2;
  
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld",&n);
      i=1;
      while(n>=a[i])
      i++;
      cout<<--i<<endl;
  }
	return 0;
}
 