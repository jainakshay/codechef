#include <stdio.h>
#include<stdlib.h>
int compare (const void* a,const void* b)
{
    return *(long long*)a-*(long long*)b;
}
int main()
{   int t,n,i;
	long long s[50001],diff;
	scanf("%d",&t);
	while(t-->0)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	   scanf("%lld",&s[i]);
	    }
	    diff=1000000000;
	    qsort(s,n,sizeof(long long),compare);
	    for(i=n-1;i>0;i--)
	    {
	        if((s[i]-s[i-1])<diff)
	        diff=s[i]-s[i-1];
	    }
	    printf("%lld\n",diff);
	}
	return 0;
}

