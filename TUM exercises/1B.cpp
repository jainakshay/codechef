#include<bits/stdc++.h>
#define c_sq 299792458*299792458
using namespace std;
int main() 
{
    unsigned long long m,t,i;
    i=0;
    scanf("%llu",&t);
    while(t--)
    {
        i++;
        scanf("%llu",&m);
        m=m*c_sq;
        printf("Case #%llu: %llu\n",i,m);
    }
	return 0;
}
 