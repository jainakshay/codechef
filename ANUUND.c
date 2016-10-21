#include <stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return *(long*)a-*(long*)b;
}
int main()
{
	long t,n,a[100000],b[100000],i,j,k,start,end;
	scanf("%ld",&t);
	while(t--)
	{
	    scanf("%ld",&n);
	    for(i=0;i<n;i++)
	    scanf("%ld",&a[i]);
	    qsort(a,n,sizeof(long),compare);
	    for(i=0;i<n;i++)
	    end=n-1;start=0;k=0;
	    while(start<=end)
	    {
	        if(k%2!=0)
	        {
	            b[k++]=a[end];
	            end--;

	        }
	        else
	        {
	            b[k++]=a[start];
	            start++;
	        }
	    }
	    for(i=0;i<n;i++)
	    printf("%ld ",b[i]);
	    printf("\n");
	}
	return 0;
}

