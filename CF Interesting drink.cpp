#include<bits/stdc++.h>
using namespace std;
long bs(long A[], long left, long right, long item) 
{
    long mid;
    while (left<=right) {
        mid = left + (right - left) / 2;
        if (A[mid] <= item)
            left = mid+1;
        else
            right = mid-1;
    }
    return left;
}
int main()
{
    long n,p[100010],days,m,i,ans;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>p[i];
    sort(p,p+n);
    cin>>days;
    for(i=0;i<days;i++)
    {
    cin>>m;
    ans=bs(p,0,n-1,m);
    cout<<ans<<endl;
    }
	return 0;
}