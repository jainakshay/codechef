/***********************************************************
AIM:https://www.codechef.com/JAN16/problems/CYCLRACE
AUTHOR: AKSHAY JAIN
DATE: 07/01/2016
STATUS: AC
SCORE: 25
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct cycle
{
    long long v,s,t;
};
int main() 
{
    long long n,q,sec,type,i,j,pos,max,num,speed;
    struct cycle a[100000];
    scanf("%lld %lld",&n,&q);
    for(i=0;i<=n;i++)
    {
        a[i].s=0;
        a[i].v=0;
        a[i].t=0;
    }
    while(q--)
    {
        scanf("%lld",&type);
        if(type==1)
        {
            scanf("%lld %lld %lld",&sec,&num,&speed);
            for(i=1;i<=n;i++)
            {
                a[i].s  +=  (a[i].v * (sec- a[i].t));
                a[i].t= sec;
            }
            a[num].v=speed;
        }
        if(type==2)
        {
            scanf("%lld",&sec);
            max=INT_MIN;
            for(i=1;i<=n;i++)
            {
                a[i].s  +=  (a[i].v * (sec- a[i].t));
                a[i].t= sec;
                if(a[i].s>max)
                {
                    max=a[i].s;
                    pos=i;
                }
            }
            printf("%lld\n",a[pos].s);
        }
    }
	return 0;
}
 