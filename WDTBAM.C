/***********************************************************
AIM: https://www.codechef.com/OCT15/problems/WDTBAM
AUTHOR: AKSHAY JAIN
DATE: 03/10/15
STATUS: AC 
SCORE:100
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
    unsigned long long w[10000],t,i,max,n,count;
    char a[10000],b[10000];
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu",&n);
        scanf("%s",a);
        scanf("%s",b);
        for(i=0;i<n+1;i++)
        scanf("%lld",&w[i]);
        count=0;
        for(i=0;i<strlen(a);i++)
        if(a[i]==b[i])
        count++;
        if(count==n)
        max=w[n];
        else
        {
        max=w[0];
        for(i=0;i<=count;i++)
        max=w[i]>max?w[i]:max;
        }
        printf("%llu\n",max);
    }
    return 0;
}
  