#include<stdlib.h>
#include <iostream>
using namespace std;
int compare(const void*a,const void *b)
{
    return *(long long*)a-*(long long *)b;
}

int main()
{
    long long a[100001],b[100001],t,n,i,j;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {cin>>a[i];b[i]=a[i];}
        qsort(b,n,sizeof(long long),compare);
for(i=1;i<=n;i++)
{
if(a[i]!=b[i])
break;
}
for(j=n;j>0;j--)
{
    if(a[j]!=b[j])
    break;
}
     cout<<i<<","<<j<<"\n";
    }
	return 0;
}
