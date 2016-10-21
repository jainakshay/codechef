#include <iostream>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return *(long long*)a-*(long long*)b;
}
using namespace std;

int main()
{
    long long t,a[100000],i,n,count;
    cin>>t;
    while(t-->0)
    {count=0;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    qsort(a,n,sizeof(long long),compare);
    for(i=n-1;i>=0;i=i-2)
    count=count+a[i];
    cout<<count<<"\n";
    }
	return 0;
}
