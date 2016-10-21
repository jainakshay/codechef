//ABCDEFGHIJKLMNOPQRSTUVWXYZ
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100];
    long i,t,count,l;
    cin>>t;
    while(t-->0)
    {
        count=0;
        cin>>a;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='A'||a[i]=='D'||a[i]=='O'||a[i]=='Q'||a[i]=='P'||a[i]=='R')
            count++;
            else if(a[i]=='B')
            count=count+2;
        }
        cout<<count<<endl;
    }
    return 0;
}
