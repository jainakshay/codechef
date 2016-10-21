/***********************************************************
AIM:http://codeforces.com/contest/616/problem/B
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
    long a,i,j,max,min,n,m;
    scanf("%ld %ld",&n,&m);
    max=INT_MIN;
    for(i=0;i<n;i++)
    {
        min=INT_MAX;
        for(j=0;j<m;j++)
        {
            scanf("%ld",&a);
            min=a<min?a:min;
        }
        max=min>max?min:max;
    }
    printf("%ld\n",max);
	return 0;
}
 