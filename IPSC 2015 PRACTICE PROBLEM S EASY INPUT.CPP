#include <iostream>
#include<cstdio>
using namespace std;
struct card
{
    long val;
    char type;
};
int main()
{
	card a[1000000];
	long count,i,j,k,h,s,c,d,t,n;
	scanf("%ld",&t);
	while(t--)
	{
	    count=1;
	    h=0;s=0;c=0;d=0;
	    scanf("%ld",&n);
	    scanf("%c%ld",&a[0].type,&a[0].val);
	    for(i=0;i<4*n;i++)
	    {
	        scanf("%c%ld ",&a[i].type,&a[i].val);
	       // printf("%c%ld ",a[i].type,a[i].val);
	        if(a[i].type=='S'&& a[i].val==s+1)
	        {
	            a[i].val=0;
	            s++;
	        }
	        if(a[i].type=='H'&& a[i].val==h+1)
	        {
	            a[i].val=0;
	            h++;
	        }
	        if(a[i].type=='D'&& a[i].val==d+1)
	        {
	            a[i].val=0;
	            d++;
	        }
	        if(a[i].type=='C'&& a[i].val==c+1)
	        {
	            a[i].val=0;
	            c++;
	        }
	    }
	    while(c<n || s<n || h<n || d<n)
	    {
	   for(i=0;i<4*n;i++)
	    {
	        if(a[i].type=='S'&& a[i].val==s+1)
	        {
	            a[i].val=0;
	            s++;
	        }
	        if(a[i].type=='H'&& a[i].val==h+1)
	        {
	            a[i].val=0;
	            h++;
	        }
	        if(a[i].type=='D'&& a[i].val==d+1)
	        {
	            a[i].val=0;
	            d++;
	        }
	        if(a[i].type=='C'&& a[i].val==c+1)
	        {
	            a[i].val=0;
	            c++;
	        }
	    }
	    count++;
	    }
	    printf("%ld\n",count);
	}
	return 0;
}
