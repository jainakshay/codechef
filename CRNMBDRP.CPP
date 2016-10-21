#include <iostream>
using namespace std;
int main()
{
	long long n,x;
	double d=0.000000,p;
	scanf("%lld",&n);
	while(n--)
	{   d=0;
	    scanf("%lld",&x);
	    if(x<=100)
	    {
	        printf("0.000000\n");
	    }
	    else
	    {
	    x=x-100;
	    p=x%20;
	    x=x/20;
	    d=0.1*x+(0.005*p);
	    printf("%.6lf\n",d);
	    }
	}
	return 0;
}
