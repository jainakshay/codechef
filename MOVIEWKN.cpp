#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long t,n,k,l[1000],r[1000],i,ans,pos;
    cin>>t;
    while(t--)
    {
        pos=0;
        cin>>n;
        ans=1;
        for(i=0;i<n;i++)
        cin>>l[i];
        for(i=0;i<n;i++)
        cin>>r[i];
        for(i=0;i<n;i++)
        {
            k=l[i]*r[i];
            if(k>ans)
            {
            ans=k;
            pos=i;
            }
            else if(k==ans && r[i]>r[pos])
            pos=i;
        }
        cout<<pos+1<<endl;
    }
  
	return 0;
}
 