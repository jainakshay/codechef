#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long n,q,a[100001],i,min,max,k;
  min=INT_MAX;
  max=INT_MIN;
  scanf("%ld %ld",&n,&q);
  for(i=0;i<n;i++)
  {
      scanf("%ld",&a[i]);
      min=a[i]<min?a[i]:min;
      max=a[i]>max?a[i]:max;
  }
  while(q--)
  {
    scanf("%ld",&k);
    if(k<=max && k>=min)
    cout<<"Yes\n";
    else
    cout<<"No\n";
  }
	return 0;
}
 