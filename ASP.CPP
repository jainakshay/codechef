/***********************************************************
AIM: https://www.codechef.com/COOK63/problems/ASP
AUTHOR: AKSHAY JAIN
DATE: 18/10/15
STATUS: AC 
SCORE:--
***********************************************************/
//Code goes here..!!
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
long long a[1000001];
int main() 
{
  long long i,j,n,t;
  bool val=true;
  scanf("%lld",&t);
  while(t--)
  {
    val=true;  
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
   for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            long long temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            val=false;
            break;
        }
    }
    if(val==true)
    printf("YES\n");
    else
    printf("NO\n");
  }
	return 0;
}
 