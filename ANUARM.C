#include<limits.h>
#include<math.h> 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define big(a,b) a>b?a:b
int main() 
{
   long t,max,min,n,m,a[100000],maxarr[100000],i,j;
   scanf("%ld",&t);
   while(t--)
   { 
       min=LONG_MAX;
       max=LONG_MIN;
       scanf("%ld %ld",&n,&m);
       for(i=0;i<m;i++)
       {
           scanf("%ld",&a[i]);
           min=a[i]<min?a[i]:min;
           max=a[i]>max?a[i]:max;
       }
       for(i=0;i<n;i++)
       {
       maxarr[i]=big(abs(i-min),abs(i-max));
       printf("%ld ",maxarr[i]);
       }
       printf("\n");
   }
    return 0;
}
 