/***********************************************************
AIM: https://www.codechef.com/problems/AMR15D
AUTHOR: AKSHAY JAIN
DATE: 17/10/15
STATUS:--
SCORE:--
***********************************************************/
//Code goes here..!!
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
bool compare(long i,long j)
{
    return i>j;
}
int main() 
{
long long a[100001],b[100001],ans=0;
long long q,k,i,n,sum=0;
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&b[i]);
sort(b,b+n,compare);
scanf("%lld",&q);
k=1;
for(i=n-1;i>=0;i--)
{   
	sum+=b[i];
	a[k++]=sum;
}
a[0]=sum;
while(q--)
{
    ans=0;
    bool val=false;
	scanf("%lld",&k);
	if(k!=0)
	{
	   if(n%(k+1)>=1)
	   {
	   val=true;
	   }
	   k=n/(k+1);
	}
	if(val==true)
	ans=a[k+1];
	else
	ans=a[k];
    cout<<ans<<endl;
}
return 0;
}