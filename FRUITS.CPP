/***********************************************************
AIM:https://www.codechef.com/COOK66/problems/FRUITS
AUTHOR: AKSHAY JAIN
DATE: 24/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long t,n,m,k,diff,ans;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld %ld",&n,&m,&k);
        diff=abs(n-m);
        if(k>=diff)
        {
            ans=0;
        }
        else
        ans=diff-k;
        cout<<ans<<endl;
    }
  
	return 0;
}
 