#include<math.h>
#include <stdio.h>
int main()
{
    unsigned long long t,n,i,sum,m;
    scanf("%lld",&t);
    while(t--)
    {   sum=0;
        scanf("%lld",&n);
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
              sum+=n/i +i;
            }
        }
        m=sqrt(n);
        if(m*m==n)
        sum=sum-m;
        printf("%lld\n",sum);
    }
	return 0;
}
