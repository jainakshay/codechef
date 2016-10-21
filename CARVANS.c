#include <stdio.h>
int main()
{
	int t,n,i,count;
	long long a[10000];
	scanf("%d",&t);
	while(t--)
    {   count=1;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    for(i=1;i<n;i++)
	    {
	        if(a[i]<=a[i-1])
	        count++;
	        else
	        a[i]=a[i-1];
	    }
	    printf("%d\n",count);
	}
	return 0;
}

