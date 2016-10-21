/***********************************************************
AIM:https://www.hackerearth.com/nit-calicut-codeburst-50/algorithm/staircase-problem-2/
AUTHOR: AKSHAY JAIN
DATE: 26/01/2016
STATUS: AC
SCORE: 100
***********************************************************/
//Code goes here..!!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,n,i,sum;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	sum=0;
    	for(i=2;i<=n;i++)
    	{
    		sum+=i;
    		if(sum>=n)
    		{
    			cout<<i-1<<endl;
    			break;
    		}
    	}
    }
    return 0;
}
