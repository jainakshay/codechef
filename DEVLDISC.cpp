/***********************************************************
AIM:https://www.codechef.com/FEB16/problems/DEVLDISC
AUTHOR: AKSHAY JAIN
DATE: 10/02/2016
STATUS: AC
SCORE: 100
***********************************************************/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k,start,t,e;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=6)
        cout<<"-1\n";
        else
        {
          bool val= false;
           if(n%2==0)    
           {
           start=n-2;
           e=((n/2)-1)*3;
           val=true;
           n--;
           }
           else
           {
           start=n-1;
           e=((n/2)*3)-1;
           }
           cout<<e<<endl;
           for(i=1;(i+2)<=n;i+=2)
           {
            cout<<i<<" "<<i+2<<endl;
           }
           for(i=2;(i+2)<=n;i+=2)
           {
            cout<<i<<" "<<i+2<<endl;
           }
           for(i=1;i+1<=start;i+=2)
           {
            cout<<i<<" "<<i+1<<endl;
           }
           if(val==true)
           {
               cout<<n+1<<" "<<n-2<<endl;
           }
           cout<<start<<endl;
        }
    }
	return 0;
}
 