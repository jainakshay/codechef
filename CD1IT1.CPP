#include <iostream>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return *(long long*)b-*(long long*)a;
}
using namespace std;
int main()
{
    long long a[100001],i,n;
    cin>>n;
    for(i=0;i<n;i++)
   { cin>>a[i];}
    qsort(a,n,sizeof(long long),compare);
    n=n/2;
    cout<<a[n]<<endl;
	return 0;
}
