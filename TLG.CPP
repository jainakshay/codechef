#include <iostream>
#include<cmath>
#define max(a,b)a>b?a:b
using namespace std;
struct lead
{
  int a[10000],s[10000];
};
int main()
{
    lead l; int n,p1,p2,i,m,pos=0;
    scanf("%d",&n);
    cin>>p1>>p2;
   l.a[0]= abs(p1-p2);
   if(p1>p2)
   l.s[0]=1;
   else
   l.s[0]=2;
    for(i=1;i<n;i++)
    {
        cin>>p1>>p2;
        if(l.s[i-1]==1)
        {
        if(max(p1,p2)==p1)
        l.a[i]=l.a[i-1]+p1-p2;
          else
         l.a[i]=(l.a[i-1]-p2+p1);
         if(l.a[i]<0)
         {
           l.a[i]=abs(l.a[i]);
           l.s[i]=2;
         }
          else if(l.a[i]>0)
          l.s[i]=1;
        }
        else
        {
            if(max(p1,p2)==p1)
            l.a[i]= (l.a[i-1]-p1+p2);
            else
         l.a[i]=l.a[i-1]+p2-p1;
        if(l.a[i]<0)
         {
           l.a[i]=abs(l.a[i]);
           l.s[i]=1;
         }
        else if(l.a[i]>0)
        l.s[i]=2;
        }
        }
    m=l.a[0];
    for(i=0;i<n;i++)
    {
        if(l.a[i]>m)
    {   m=l.a[i];pos=i;}
    }
    cout<<l.s[pos]<<" "<<m<<endl;
	return 0;
}
