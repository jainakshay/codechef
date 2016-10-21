#include <iostream>
#include<stack>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char a[100000];
    long i,j,count=0,n,flag;
    scanf("%ld",&n);
    while(n--)
    {
    	stack <char> s;
    	scanf("%s",a);
    	s.push(a[0]);
    	for(i=1;i<strlen(a);i++)
    	{
    		if(s.empty())
    		s.push(a[i]);
    	    else if(s.top()==a[i])
    		s.pop();
    		else
    		s.push(a[i]);
    	}
    	if(s.empty())
    	count++;
    }
    printf("%ld",count);
    return 0;
}
