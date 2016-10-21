#include<bits/stdc++.h>
using namespace std;
bool diff(long long a,long long b)
{
    if(a!=0 && b!=0)
    {
     if(a*b<0)
     return true;
    }
    if(a<0 && b==0)
    return true;
    if(b<0 && a==0)
    return true;
    
    return false;
}
int main() 
{
  long long t,k,a[100001],i,n,count,max,b[100001];
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld",&n);
      for(i=0;i<n;i++)
      {
      scanf("%lld",&a[i]);
      }
      max=0;k=0;
      for(i=0;i<n;i++)
      {
        count=1;
        while(diff(a[i],a[i+1]) && i<n-1)
        {
            count++;
            i++;
        }
        b[k++]=count;
      }
      for(i=0;i<k;i++)
      {
        while(b[i]>=1)
        {
        printf("%lld ",b[i]);
        b[i]--;
        }
      }
      cout<<endl;
  }
	return 0;
}
 