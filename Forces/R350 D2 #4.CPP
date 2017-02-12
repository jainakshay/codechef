#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long ans,n,k,i,j,start,end,mid,a[100009],b[100009],k2;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    start=0;
    end=INT_MAX;
    bool flag;
    while(start<=end)
    {
        k2=k;
        mid=start+(end-start)/2;
        flag=true;
        for(i=0;i<n;i++)
        {
            long long temp=a[i]*mid;
            if(b[i]< temp)
            {
                if(k2>= temp-b[i])
                {
                    k2=k2-(temp-b[i]);
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true)
        {
        ans=mid;
        start=mid+1;
        }
        else
        end=mid-1;
    }
    cout<<ans<<endl;
	return 0;
}
 