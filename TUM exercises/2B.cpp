#include<bits/stdc++.h>
using namespace std;
void solve()
{
 long i,j,p,count,d1,d2,d3;
 double start,mid,end,val,u,v,d;
 cin>>d>>p>>u>>v;
 start=0.00;
 end=2*d;
 long xyz=0;
 while(xyz<100)
 {
    xyz++;
    mid= end+(start-end)/2;
    d1=u/mid;
    d2=v/mid;
    d3=(d-v)/mid;
    if(d1==d2)
    count=(d/mid)+1;
    else 
    count=d1+d3+2;
    if(count<p)
    {
     end=mid;
    }
    else if(count>=p)
    {
     start=mid;
    }
 }
 printf("%.10lf\n",mid);
}
int main() 
{
  long cases,i;
  cin>>cases;
  for(i=1;i<=cases;i++)
  {
    cout<<"Case #"<<i<<": ";
    solve();
  }
    return 0;
}
 