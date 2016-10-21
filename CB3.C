/***********************************************************
AIM:https://www.codechef.com/COBA2016/problems/CB3
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
int main() 
{
    long fib[100],i,j,t,n;
    fib[0]=0;
    fib[1]=1;
    fib[2]=1;
    for(i=3;i<=88;i++)
    {
    fib[i]=fib[i-1]+fib[i-2];
    fib[i]%=26;
    }
    for(i=0;i<=88;i++)
    {
     if(fib[i]==0)
     fib[i]=26;
     //printf("%ld ",fib[i]);
    }
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        printf("%c",fib[i]+64);
        printf("\n");
    }
	return 0;
}
 