#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
inline void scanint(long long int* x)
{
register char c = getchar_unlocked();
*x = 0;
for(; (c<48)||(c>57);c = getchar_unlocked());
for(; (c>47)&&(c<58);c = getchar_unlocked())
*x = (long long int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
 long long a[1000001],b[1000001],arr[1000001];
int main() 
{
   long long i,min1,j,n,l,h,u,t,x,y,sum;
   scanint(&t);
   while(t--)
   {
       min1=LONG_MAX;
       scanint(&n);
       scanint(&h);
       for(i=0;i<n;i++)
       {
        a[i]=0;b[i]=0;    
       }
       for(i=0;i<n;i++)
       {
           scanint(&l);scanint(&u);
           a[l]++;
           b[u]++;
       }
       x=0;y=0;u=0;sum=0;
		for(j=0;j<n;j++)
		{
			if(a[j])
			{
				x+=a[j];
			}
			if(b[j])
			{
				y=b[j];
			}
			else
			y=0;
			arr[j]=n-x;
			x=x-y;
		    sum+=arr[j];
		    if(j==(h-1))
		    {
		    min1=sum;
		    }
		    else if(j>=h)
		    {
		    sum-=arr[u++];
		    }
		    min1=(sum<=min1)?sum:min1;
		}
       printf("%lld\n",min1);
   }
	return 0;
} 