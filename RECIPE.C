#include <stdio.h>
#define cin(n) scanf("%d",&n)
int findgcd(int a,int b)
{
    int j,gcd;
    for(j=1;j<=a&&j<=b;j++)
    {
        if((a%j==0)&&(b%j==0))
        gcd=j;
    }
    return gcd;
}
int main()
{
	int t,a[51],i,n,g;
	cin(t);
	while(t--)
	{
	    cin(n);
	    for(i=0;i<n;i++)
	    cin(a[i]);
	    g=a[0];
	    for(i=0;i<n;i++)
	    g=findgcd(g,a[i]);
	    for(i=0;i<n;i++)
	    {
	        a[i]/=g;
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	}
	return 0;
}
