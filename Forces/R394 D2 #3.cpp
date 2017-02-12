#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long n,l,i,j,nmin,amin,smin;
    char str[100];
    cin>>n>>l;
    nmin=amin=smin=INT_MAX;
    for(i=0;i<n;i++)
    {
        cin>>str;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]<=122 && str[j]>=97)
            amin=min(amin,j);
            else if(str[j]>=48 && str[j]<=57)
            nmin=min(nmin,j);
            else if(str[j]=='#' || str[j]=='&' || str[j]=='*')
            smin=min(smin,j);
        }
    }
    cout<<smin+nmin+amin<<endl;
    return 0;
}
 