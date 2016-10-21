#include<bits/stdc++.h>

long long max(long long a,long long b)
{
 return ((a>b)?a:b);
}

long long dp(long long n,long long g[],long long pos,long long table[])
{
    if(pos>=n)
    return 0;
    
    if(table[pos]!=-1)
    return table[pos];
    
    long long p;
    p=max((g[pos]+dp(n,g,pos+2,table)),(g[pos+1]+dp(n,g,pos+3,table)));
    table[pos]=p;
    return p;
}

using namespace std;
int main() 
{
    long long t,i,n,g[100000],count=0,ans;
    long long table[100000];
    scanf("%lld",&t);
    while(t--)
    {
        memset(table,-1,sizeof(table));
        memset(g,0,sizeof(g));
        count++;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%lld",&g[i]);
        ans=dp(n,g,0,table);
        printf("Case %lld: %lld\n",count,ans);
    }
	return 0;
}
 