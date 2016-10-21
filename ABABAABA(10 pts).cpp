#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,i;
    char a[10];
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(strlen(a)==3)
        {
        if(a[0]==a[1] && a[0]==a[2])
        cout<<"-1"<<endl;
        else 
        {
            if(a[0]==a[1] || a[0]==a[2])
            cout<<a[0]<<endl;
            else
            cout<<a[1]<<endl;
        }
        }
        else if(a[0]==a[1])
        cout<<a[0]<<endl;
        else
        cout<<"-1\n";
    }
	return 0;
}
 