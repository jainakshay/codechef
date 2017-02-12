#include<bits/stdc++.h>
using namespace std;
int main() 
{
    bool val=false;
    int a,b,n;
    cin>>n>>a>>b;
    if(b<0)
    {
    val=true;
    b*=-1;
    }
    b=b%n;
    if(val==false)
    {
        b=b+a;
        b%=n;
    }
    else
    b=(a-b+n)%n;
    if(b==0)
    b=n;
    cout<<b<<endl;
	return 0;
}
 