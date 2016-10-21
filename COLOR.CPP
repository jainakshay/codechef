#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long n,i,r,g,b,t;
    char c;
    cin>>t;
    while(t--)
    {
        r=g=b=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>c;
            if(c=='R')
            r++;
            else if(c=='G')
            g++;
            else
            b++;
        }
    if(r>=g && r>=b)
    cout<<n-r<<endl;
    else if(g>=r && g>=b)
    cout<<n-g<<endl;
    else
    cout<<n-b<<endl;
    }
  
	return 0;
}
 