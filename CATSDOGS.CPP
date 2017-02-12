#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,c,d,l;
    bool flag;
    scanf("%lld",&t);
    while(t--)
    {
        flag=true;
        cin>>c>>d>>l;
        if(l%4!=0 || (d*4) > l || (c+d)*4 <l)
        {
            cout<<"no\n";
            continue;
        }
        l-=(d*4);
        if(l>=0)
        {
            l/=4;
            if(c > l+(2*d))
            cout<<"no\n";
            else
            cout<<"yes\n";
        }
    }
  
	return 0;
}
 