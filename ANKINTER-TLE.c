#include <stdio.h>
#include<math.h>
inline void scanint(long long int* x)
{
register char c = getchar_unlocked();
*x = 0;
for(; (c<48)||(c>57);c = getchar_unlocked());
for(; (c>47)&&(c<58);c = getchar_unlocked())
*x = (long long int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}
inline void printint(int n)
{
if(n == 0)
{
putchar_unlocked('0');
putchar_unlocked('\n');
}
else
{
char buf[20];
buf[19] = '\n';
int i = 18;
while(n)
{
buf[i--] = n % 10 + '0';
n /= 10;
}
while(buf[i] != '\n')
putchar_unlocked(buf[++i]);
}
}
int main()
{
	long long a[1000001],t,i,n,w,sum,start,sum2,count,l,max,min;
	scanint(&t);
	while(t--)
	{   sum=0;count=0;max=0,min=1000001;
	    scanint(&n);
	    scanint(&w);
	    count+=0;
	    for(i=1;i<=n;i++)
	    scanint(&a[i]);
	    start=0;
	        for(i=start+1;i<=n;i++)
	        {
	            if(a[i]>max)
	             max=a[i];
	             if(a[i]<min)
	             min=a[i];
	             sum+=a[i];
	             l=i-start;
	             if(l>=w)
	             {
	             sum2=max*(max+1)/2;
	             sum2-=(min-1)*(min)/2;
	             if(sum==sum2)
	             count++;
	             }
	             if(i==n)
	             {
	                 max=0;
	                 min=1000001;
	                 start++;
	                 i=start;
	                 sum=0;
	            }
	        }
	        printint(count);
	}
	return 0;
}

