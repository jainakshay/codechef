#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long t,i,j,n,a;
    double sum,avg;
    scanf("%ld",&t);
    while(t--)
    {
        sum=0.00;
        scanf("%ld",&n);
        bool fail,full;
        fail=false;full=false;
        for(i=0;i<n;i++)
        {
        scanf("%ld",&a);
        if(a==2)
        fail=true;
        
        if(a==5)
        full=true;
        sum+=a;
        }
        avg=sum/n;
        if(!fail && full && avg>=4.0)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
	return 0;
}
 