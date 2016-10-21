/***********************************************************
AIM:https://www.codechef.com/IOIPRAC/problems/INOI1402
AUTHOR: AKSHAY JAIN
DATE: 07/01/2016
STATUS: AC
SCORE: 100
TAG: Floyd Warshel Algorithm
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
long min(long a,long b)
{
    return (a<b?a:b);
}
int main() 
{
    long i,j,f,k,c,w[300][300],p,s,d,max;
    scanf("%ld %ld",&c,&f);
    for(i=1;i<300;i++)
    for(j=1;j<300;j++)
    {
        w[i][j]=2000000;
    }
    for(i=0;i<f;i++)
    {
        scanf("%ld %ld %ld",&s,&d,&p);
        w[s][d]=p;
        w[d][s]=p;
    }
    for(k=1;k<=c;k++)
    for(i=1;i<=c;i++)
    for(j=1;j<=c;j++)
    {
    w[i][j]=min(w[i][j],(w[i][k]+w[k][j]));
    }
    max=INT_MIN;
    for(i=1;i<=c;i++)
    for(j=1;j<=c;j++)
    {
        //printf("%ld ",w[i][j]);
        max=(w[i][j]>max &&w[i][j]!=2000000 && i!=j)?w[i][j]:max; 
    }
    
    printf("%ld\n",max);
	return 0;
}
 