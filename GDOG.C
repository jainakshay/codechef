#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define max(a,b) a>b?a:b
int main() 
{
    long k,n,t,i,r,val;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&n,&k);
        r=0;
        for(i=1;i<=k;i++)
        r=max(r,n%i);
        printf("%ld\n",r);
    }
  
	return 0;
}
 