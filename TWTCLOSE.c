/***********************************************************
AIM: https://www.codechef.com/problems/TWTCLOSE
AUTHOR: AKSHAY JAIN
DATE: 17/10/15
STATUS: AC 
SCORE:NA
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
    int n,k,x,i,count;
    bool a[1001];
    char s[10];
    scanf("%d %d",&n,&k);
    memset(a,false,sizeof(a));
    count=0;
    while(k--)
    {
    scanf("%s %d",s,&x);
    if(strcmp(s,"CLICK")==0)
    {
        if(a[x]==false)
        {
            a[x]=true;
            count++;
        }
        else
        {
            a[x]=false;
            count--;
        }
    }
    else
    {
        memset(a,false,sizeof(a));
        count=0;
    }
    printf("%d\n",count);
    }
	return 0;
}
 