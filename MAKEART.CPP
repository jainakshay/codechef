#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long t,n,i,k,a[100010];
  scanf("%ld",&t);
  while(t--)
  {
      scanf("%ld",&n);
      for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
      bool flag=false;
      i=0;
      while(i<n-2)
      {
        if(a[i]==a[i+1] && a[i+1]==a[i+2])
        {
        flag=true;
        break;
        }
        else
        {
         i++;
        }
      }
      if(flag==true)
      cout<<"Yes\n";
      else
      cout<<"No\n";
  }
	return 0;
}
 