#include <iostream>
using namespace std;
int main()
{
	int t,i,k,m;long p;
	scanf("%d",&t);
	while(t-->0)
	{
	m=0;
	scanf("%d",&p);
	if(p>2048)
	{
	    m+=(p/2048);
	    p=p%2048;
	}
	k=p;
	while(k>=1)
	{
	    if(!(k&(k-1)))
	    {
	        m++;
	        k=p-k+1;
	        p=k-1;;
	    }
	        k--;
	}
	printf("%d \n",m);
	}
	return 0;
}
