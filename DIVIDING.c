#include <stdio.h>
#define cin(a) scanf("%lld",&a)
#define sum(n) n*(n+1)/2
int main()
{
    long long e,n,s,i,s1=0;
    cin(n);
    s=sum(n);
    for(i=0;i<n;i++)
    {
        cin(e);
        s1+=e;
    }
   if(s1==s)
   printf("YES\n");
   else
   printf("NO\n");
	return 0;
}
