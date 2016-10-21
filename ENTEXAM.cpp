#include <bits/stdc++.h>
using namespace std;
bool compare(long long a,long long b)
{
    return (a>b);
}
int main() 
{
	long long n,k,e,m,t,i,j,sum[100000],score,sergey_marks;
	scanf("%lld",&t);
	while(t--)
	{
	    sergey_marks=0;
	    scanf("%lld %lld %lld %lld",&n,&k,&e,&m);
	    memset(sum,0,sizeof(sum));
	    for(i=0;i<n-1;i++)
	    {
	        for(j=0;j<e;j++)
	        {
	            scanf("%lld",&score);
	            //cout<<score<<" ";
	            sum[i]+=score;
	        }
	    }
	    for(i=0;i<e-1;i++)
	    {
	        scanf("%lld",&score);
	        sergey_marks+=score;
	    }
	    sort(sum,sum+n-1,compare);
	    //for(i=0;i<n-1;i++)
	    //cout<<sum[i]<<" ";
	    i=k-1;
	    //while(sum[i]==sum[i+1] && i>=0)
	    //i--;
	    sum[i]++;
	    if(sum[i]-sergey_marks > m)
	    cout<<"Impossible\n";
	    else if(sum[i]-sergey_marks <0)
	    cout<<"0\n";
	    else
	    {
	       cout<<sum[i]-sergey_marks<<endl;
	    }
	}
	return 0;
}
