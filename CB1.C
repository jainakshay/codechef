/***********************************************************
AIM:https://www.codechef.com/COBA2016/problems/CB1
AUTHOR: AKSHAY JAIN
DATE: 11/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
bool isprime(long n)
{
    if(n==1)
    return false;
    long i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    bool a[1000010];
    long i,j,x,y,count,t;
    for(i=1;i<=1000000;i++)
    {
        a[i]=isprime(i);
    }
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&x,&y);
        count=0;
        for(i=x;i<=y;i++)
        if(a[i]==true)
        count++;
        printf("%ld\n",count);
    }
    
	return 0;
}
 