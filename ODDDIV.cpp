#include<bits/stdc++.h>
using namespace std;
long isprime(long n)
{
    long i;
    for(i=2;i<=sqrt(n);i++)
    {
    if(n%i==0)
    return false;
    }
    return true;
}
int main() 
{
   long long prime[100001],i,t,l,r,sum,j,k=0,n,ans,pro,arr[100001];
    long long count;
    memset(arr,0,sizeof(arr));
    for(i=3;i<=100000;i+=2)
    {
        if(isprime(i))
        {
        prime[k++]=i;
        arr[i]=i+1;
        }
    }
  cin>>t;
  while(t--)
  {
      j=k;
      cin>>l>>r;
      ans=0;
      arr[1]=1;
      for(i=l;i<=r;i++)
      {
        if(arr[i]!=0)
        {
            ans+=arr[i];
            continue;
        }
        n=i;
        k=0;
        pro=1;
        
        while(n%2==0)
        n/=2;
        
        if(arr[n]!=0)
        {
            ans+=arr[n];
            continue;
        }
      long long num=n;
        while(n!=1)
        {
            sum=0;
            count=0;
            while(n%prime[k]==0)
            {
                n=n/prime[k];
                count++;
            }
            sum=(pow(prime[k],count+1)-1)/(prime[k]-1);
            k++;
            pro*=sum;
        }
        arr[i]=pro;
        arr[num]=pro;
        ans+=pro;
      }
      cout<<ans<<endl;
  }
	return 0;
}
 