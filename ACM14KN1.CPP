#include <iostream>
using namespace std;
int main()
{
	int t,flag;
	unsigned long long s,e,n,x,y;
	scanf("%d",&t);
	while(t-->0)
	{   flag=1;
	    scanf("%lld %lld",&s,&e);
	    scanf("%lld",&n);
	    while(n-->0)
	    {
	        scanf("%lld %lld",&x,&y);
	        if(x>=e||y<=s){}
	        else
	        {
	        flag=0;
	        }
	    }
	    if(flag==0)
         cout<<"NO\n";
        else if(flag==1)
        cout<<"YES\n";
	}
	return 0;
}
