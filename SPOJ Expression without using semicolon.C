#include <iostream>
#include<cstdio>
int main(int a,int b,char c,int t)
{
if(scanf("%d",&t))
{}
while(t--)
{
    if(scanf("%d%c%d",&a,&c,&b))
    {}
    if(c=='*')
    {
        if(printf("%d\n",a*b))
        {}
    }
    else if(c=='+')
    {
        if(printf("%d\n",a+b))
        {}
    }
    else
    {
    if(printf("%d\n",a-b))
    {}
    }
}
}

