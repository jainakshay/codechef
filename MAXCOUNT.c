#include <stdio.h>
int main()
{
	int i,j,n,a[101],t,count,max,p;
	scanf("%d",&t);
	while(t-->0)
	{   max=0;p=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    {    count=1;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[j]==a[i])
	            count++;
	        }
	        if(count>max)
	        {max=count;
	        p=a[i];}
	        else if((count==max)&&(a[i]<p))
	        p=a[i];
	    }
	    printf("%d",p);
	    printf(" %d\n",max);
	}
	return 0;
}
