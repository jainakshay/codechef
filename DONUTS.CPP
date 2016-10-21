#include <cstdio>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main() 
{
    long long i,j,k,m,n,a[200001],count,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<m;i++)
        scanf("%lld",&a[i]);
        sort(a,a+m);
        count=0;    
        k=m-1;
        for(i=0;i<m;i++)
        {
            if(k-(a[i]+1)>=0)
            {
            k-=(a[i]+1);
            count+=a[i];
            }
            else
            break;
        }
        count+=k;
        printf("%lld\n",count);
    }
	return 0;
}