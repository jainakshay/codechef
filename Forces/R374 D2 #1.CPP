#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long n,arr[1000],i,k;
    char a[5000];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    k=0;
    memset(arr,0,sizeof(arr));
    for(i=0;i<n;i++)
    {
        if(a[i]=='B')
        {
            k++;
            while(a[i]=='B' && i<n)
            {
                arr[k]++;
                i++;
            }
        }
    }
    cout<<k<<endl;
    for(i=1;i<=k;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
	return 0;
}
 