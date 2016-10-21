#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    unsigned long long a,n,k,r,i,j,t,count;
    scanf("%llu",&t);
    while(t--)
    {
        count=0;
        scanf("%llu %llu",&n,&k);
        r=0;a=0;i=0;
        while(1)
        {
            if(r>0)
            {
            r--;
            }
            if(r==0)
            {
            count++;
            r=k;
            }
            if(a==0 && i<n)
            {
            i++;
            scanf("%llu",&a);
            }
            if(a==r)
            {
                r=0;
                a=0;
            }
            else if(r>a)
            {
            r-=a;
            a=0;
            }
            else if(a>r)
            {
                a-=r;
                if(a>r)
                {
                    count+=a/k;
                    a=a%k;
                }
                r=0;
            }
            if(i==n && a==0)
            break;
        }
        printf("%llu\n",count);
    }
	return 0;
}
