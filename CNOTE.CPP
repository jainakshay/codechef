#include <stdio.h>
#define cin(n) scanf("%lld",&n)
int main()
{
	unsigned long long x,y,n,k,a[100001],b[100001],i,t;
	cin(t);
	while(t--)
	{   int flag=0;
	    cin(x);cin(y);cin(k);cin(n);
	    x=x-y;
	    for(i=0;i<n;i++)
	    {
	        cin(a[i]);cin(b[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if((a[i]>=x)&&(b[i]<=k))
	        {flag=1; break;}
	    }
	    if(flag==1)
	    printf("LuckyChef\n");
	    else if(flag==0)
	    printf("UnluckyChef\n");
	}
	return 0;
}

