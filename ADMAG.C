#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
    unsigned long long sum,k,n,t,f,s,a[1000000];
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu",&n);
        sum=0;
        f=1;s=1;k=1;
        while(sum<n)
        {
         if(k==1||k==2)
         a[k]=1;
         else
         a[k]=a[k-1]+a[k-2];
         sum+=a[k];
         k++;
        }
        k--;
        printf("%llu\n",k);
    }
	return 0;
}
 