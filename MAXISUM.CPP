#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long long a[100010],b[100010],k,n,t,i,max,min,ans,sum,pmax,pmin;
  scanf("%ld",&t);
  while(t--)
  {
    sum=0;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    scanf("%lld",&b[i]);
    max=INT_MIN;
    min=INT_MAX;
    for(i=0;i<n;i++)
    {
     if(max<b[i])
     {
     max=b[i];
     pmax=i;
     }
     if(min>b[i])
     {
     min=b[i];
     pmin=i;
     }
     
    }
    if(b[pmin]>=0 && b[pmax]>=0)
    {
      a[pmax]+=k;
    }
    else if(b[pmin]<=0 && b[pmax]<=0)
    {
        a[pmin]-=k;
    }
    else  //b[pmin]<0 && b[pmax]>0 as 4th case is not possible. 
    {
        if(abs(b[pmax])>abs(b[pmin]))
        {
        a[pmax]+=k;
        }
        else
        {
        a[pmin]-=k;
        }
    }
    for(i=0;i<n;i++)
    sum+=a[i]*b[i];
    printf("%lld\n",sum);
  }
	return 0;
}
 