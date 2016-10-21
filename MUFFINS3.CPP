#include <iostream>
using namespace std;
int main()
{
	int t;
	long long n;
	scanf("%d",&t);
	while(t-->0)
	{
	    scanf("%lld",&n);
	    n=(n/2)+1;
	    printf("%lld \n",n);
    }
	return 0;
}
