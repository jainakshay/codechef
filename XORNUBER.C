#include <stdio.h>
int main() 
{
unsigned long long n,m,t;
scanf("%llu",&t);
while(t--)
 {
    scanf("%llu",&n);
    if(n==1)
    printf("2\n");
    else if(!((n)&(n+1)))
    printf("%llu\n",n/2);
    else
    printf("-1\n");
 }
	return 0;
}
 