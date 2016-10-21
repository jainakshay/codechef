#include<bits/stdc++.h>
using namespace std;
long solution[10010],dp[10010][10010];
long max(long a,long b)
{
    return(a>b?a:b);
}
long knapsack(long w,long wt[],long val[],long id[],long n)
{
    long i,j,flag;
    bool k;
    for(i=0;i<=n;i++)
    {
        k=false;
        for(j=0;j<=w;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
            else if (wt[i-1] <= j)
            {
                if(val[i-1]+dp[i-1][j-wt[i-1]] > dp[i-1][j])
                {
                    k=true;
                    dp[i][j]=val[i-1] + dp[i-1][j-wt[i-1]];
                    flag=id[i-1];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
             //dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],  dp[i-1][j]);
            else
             dp[i][j] = dp[i-1][j];
        }
        if(k==true)
        {
        solution[flag]++;
        k=false;
        }
    }
  //  cout<<dp[n][w]<<endl;
    return dp[n][w];
}
void solve()
{
    long i,w,n,wt[1000],qty[1000],val[1000],ans,weight[10010],value[10010],id[10010];
    scanf("%ld %ld",&w,&n);
    for(i=0;i<n;i++)
    scanf("%ld %ld %ld",&qty[i],&wt[i],&val[i]);
    long k=0;
    for(i=0;i<n;i++)
    {
     while(qty[i])
     {
        weight[k]=wt[i];
        value[k]=val[i];
        id[k]=i+1;
        k++;
        qty[i]--;
     }
    }
    ans=knapsack(w,weight,value,id,k);
    //cout<<ans<<endl;
    long sum=0;
    for(i=n;i>=1;i--)
    {
        sum+=wt[i-1]*solution[i];
        if(sum>w)
        break;
    }
    
    for(i=i+1;i<=n;i++)
    {
        while(solution[i])
        {
            cout<<i<<" ";
            solution[i]--;
        }
    }
    cout<<endl;
}
int main() 
{
    long t,i;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        memset(solution,0,sizeof(solution));
        cout<<"Case #"<<i<<": ";
        solve();
    }
	return 0;
}
 