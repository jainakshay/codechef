#include<bits/stdc++.h>
using namespace std;
long min(long a,long b)
{
    return (a<b?a:b);
}
void solve()
{
    long c,d,m,i,j,sum,ans=0,n,k;
    long car[200000],bike[200000];
    long day1[100000],day2[100000],day3[100000],day4[100000];
    //long check_car[100000], check_bike[100000];
    long diff,maxdiff,pos,sum1,sum2;
    /*
    day1 - uses car all day
    day2- uses  all day
    day3 - starts with car but change
    day4 - starts with bike but change
    */
    scanf("%ld %ld %ld",&d,&c,&m);
    n=(c+1)*d;
    for(i=0;i<n;i++)
    scanf("%ld",&car[i]);
    for(i=0;i<n;i++)
    scanf("%ld",&bike[i]);
    j=0;i=0;
    while(i<n)
    {
        long count=0;
        sum=0;
        while(count!=(c+1) && i<n)
        {
            sum+=car[i];
            count++;
            i++;
        }
        day1[j++]=sum;
    }
    j=0;i=0;
    while(i<n)
    {
        long count=0;
        sum=0;
        while(count!=(c+1) && i<n)
        {
            sum+=bike[i];
            count++;
            i++;
        }
        day2[j++]=sum;
    }
    i=0;j=0;k=0;
    while(i<n)
    {
        sum1=0;sum2=0;
        long count=0;
        maxdiff=INT_MIN;
        while(count!=(c+1) && i<n)
        {
            sum1+=car[i];
            sum2+=bike[i];
            diff=(day1[j]-sum1)-(day2[j]-sum2+m);
            if(diff>maxdiff)
            {
                maxdiff=diff;
                pos=i+1;
            }
            i++;
            count++;
        }
        count=0;sum=0;
        while(k<pos)
        sum+=car[k++];
        
        while(k<i)
        sum+=bike[k++];
        
        sum+=m;
       day3[j++]=sum;
    }
      i=0;j=0;k=0;
    while(i<n)
    {
        sum1=0;sum2=0;
        long count=0;
        maxdiff=INT_MIN;
        while(count!=(c+1) && i<n)
        {
            sum1+=bike[i];
            sum2+=car[i];
            diff=(day2[j]-sum1)-(day1[j]-sum2+m);
            if(diff>maxdiff)
            {
                maxdiff=diff;
                pos=i+1;
            }
            i++;
            count++;
        }
        count=0;sum=0;
        while(k<pos)
        sum+=bike[k++];
        
        while(k<i)
        sum+=car[k++];
        
        sum+=m;
       day4[j++]=sum;
    }
    ans=0;
    for(i=0;i<d;i++)
    ans+=min(min(day1[i],day2[i]),min(day3[i],day4[i]));
    printf("%ld\n",ans);
}
int main() 
{
  long t,i;
  scanf("%ld",&t);
  for(i=1;i<=t;i++)
  {
    cout<<"Case #"<<i<<": ";
    solve();
  }
	return 0;
}
 