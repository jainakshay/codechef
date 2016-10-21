#include <iostream>
using namespace std;
int main()
{
  long long a[10000],i,t,n,j,count,steps,d;
  cin>>t;
  while(t>0)
  {
  steps=0; count=0;
  cin>>n;
  j=n;
  for(i=2;i<=n;i++)
  {   if(n%i==0)
     {
      a[count]=i;
      count++;
      while(n%i==0)
      {
          n=n/i;
      }
     }
  }
  for(i=count-1;i>=0;i--)
  {
      d=j/a[i];
      if(d>0)
      {
      steps=steps+d;
      j=j%a[i];
      }
  }
  cout<<steps<<endl;
  t--;
  }
  return 0;
}
