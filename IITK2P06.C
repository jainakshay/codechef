#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
    //2o-3e/5 
    //3e-2o/5
    long long t,e,o,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&e,&o);
        o=2*o;
        e=3*e;
        k=abs(o-e);
        if(k%5==0)
        {
            k/=5;
        printf("%lld\n",k);
        }
        else
        printf("-1\n");
        
    }
	return 0;
}
 