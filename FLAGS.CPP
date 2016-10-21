/***********************************************************
AIM:https://www.codechef.com/problems/FLAGS
AUTHOR: AKSHAY JAIN
DATE: 27/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    unsigned long long ans,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        ans=ans+n*(n-1)*(n-1)*2;
        ans=ans+n*(n-1)*(n-2)*(n-2)*2;
        ans=ans+n*(n-1)*(n-2);
        cout<<ans<<endl;
    }
	return 0;
}
 