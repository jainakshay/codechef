#include <stdio.h>
int main()
{
    unsigned long long a,r,n;
    scanf("%lld",&a);
    r=a%6;
   // printf("%lld",r);
    if(r==1||r==0||r==3)
    printf("yes");
    else
    printf("no");
	return 0;
}

