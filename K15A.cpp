#include <iostream>
using namespace std;

int main()
{
  int a[1001],i,t,n,j,count;
  cin>>t;
  while(t)
  {
   count=0;
   cin>>n;
   for(i=0;i<n;i++)cin>>a[i];
   for(i=0;i<n;i++)
   {
       int flag=0;
       for(j=i+1;j<n;j++)
       {
       if(a[j]==a[i]&& a[j]!=0)
       {
       a[j]=0;
       flag=1;
       }
       }
       if(flag==1)
       count++;
   }
   cout<<count<<"\n";
    t--;
  }
  return 0;
}
