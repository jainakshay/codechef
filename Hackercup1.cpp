/***********************************************************
AIM:https://www.facebook.com/hackercup/problem/910374079035613/
AUTHOR: AKSHAY JAIN
DATE: 09/01/2016
STATUS: AC
SCORE: 10
***********************************************************/
//Code goes here..!!
#include <cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long test,t,i,j,n,x[10000],y[10000],ans,sum;
    double dist[10000];
    scanf("%ld",&t);
    for(test=1;test<=t;test++)
    {
        ans=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        scanf("%ld %ld",&x[i],&y[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            dist[j]=sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
            }
            sort(dist,dist+n);
            double c=dist[0];
            for(j=1;j<n;j++)
            {
                sum=1;
                while(dist[j]==c && j<n)
                {
                sum++;
                j++;
                }
                c=dist[j];	
                ans=ans+(sum*(sum-1))/2;
            }
        }
       printf("Case #%ld: %ld\n",test,ans);
    }
    return 0;
}
