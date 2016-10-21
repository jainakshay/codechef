/***********************************************************
AIM: https://www.codechef.com/OCT15/problems/SUBINC
AUTHOR: AKSHAY JAIN
DATE: 02/10/15
STATUS: AC 
SCORE:100
***********************************************************/
//Code goes here..!!
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() 
{
    long long t,n,i,sum,count,ele,v[100001];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        scanf("%lld",&v[i]);
        sum=n; count=0;
        for(i=1;i<n;i++)
        {
         
            while(v[i-1]<=v[i] && (i<n) && (n!=1))
            {
                count++;
                i++;
            }
            sum+=(count*(count+1))/2;
            count=0;
        }
        printf("%lld\n",sum);
    }
	return 0;
}
 