#include <stdio.h>
int main()
{
unsigned long long i,k,n,count,t,j;
scanf("%lld",&t);
while(t--)
{
    count=0;
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        if(j%k==0)
        count+=0;
        else if(j%k > (k-(j%k)))
        count+=k-(j%k);
        else if(j-(j%k)==0)
        count+=k-(j%k);
        else
        count+=j%k;
    }
    printf("%lld\n",count);
}
	return 0;
}
