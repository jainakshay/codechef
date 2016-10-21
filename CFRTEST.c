#include <stdio.h>
int main()
{
	int t,n,a[100],i,j,count,d[101];
	scanf("%d",&t);
	while(t--)
	{   for(i=0;i<101;i++)
	    d[i]=0;
	    count=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    {
	        d[a[i]]++;
	    }
	    for(i=0;i<101;i++)
	    if(d[i]!=0)
	    count++;
	    printf("%d\n",count);
	}
	return 0;
}
