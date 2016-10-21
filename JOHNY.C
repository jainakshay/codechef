#include <stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return *(long long*)a-*(long long*)b;
}
int main()
{
	long long t,k,n,val,a[100],i;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)scanf("%lld",&a[i]);
	    scanf("%lld",&k);
	    k--;
	    val=a[k];
	    qsort(a,n,sizeof (long long),compare);
	    i=0;
	    while(a[i]!=val && i<n)
	    i++;
	    printf("%lld\n",++i);
	}
	return 0;
}

