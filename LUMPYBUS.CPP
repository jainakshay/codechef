#include<bits/stdc++.h>
using namespace std;
int main() 
{
  unsigned long long a[100010],i,n,p,q,ans,t;
  cin>>t;
  while(t--)
  {
      cin>>n>>p>>q;
      for(i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n);
      for(i=0;(p>0||q>0)&&(i<n);i++)
      {
         if(a[i]%2==1 && p==0)
         {
            continue; 
         }
        if(q>=(a[i]/2))
        {
        q-=(a[i]/2);
        a[i]=a[i]%2;
        }
        else
        {
        a[i]=a[i]-(2*q);
        q=0;
        }
        
        if(p>=a[i])
        {
            p=p-a[i];
            a[i]=0;
        }
        else
        {
            a[i]-=p;
            p=0;
        }
      }
      ans=0;
      for(i=0;i<n;i++)
      if(a[i]==0)
      ans++;
      cout<<ans<<endl;
  }
	return 0;
}
 