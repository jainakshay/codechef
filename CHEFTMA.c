/***********************************************************
AIM:https://www.codechef.com/JAN16/problems/CHEFTMA
AUTHOR: AKSHAY JAIN
DATE: 07/01/2016
STATUS: AC
SCORE: 100
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
    long long t,n,d,k,m,w[200005],b[200005],s[200005],c[200005],i,j,ans;
    int white[200005],black[200005];
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        memset(white,0,sizeof(white));
        memset(black,0,sizeof(black));
        scanf("%lld %lld %lld",&n,&k,&m);
        for(i=0;i<n;i++)
        scanf("%lld",&s[i]);
        for(i=0;i<n;i++)
        scanf("%lld",&c[i]);
        for(i=0;i<k;i++)
        {
        scanf("%lld",&w[i]);
        white[w[i]]++;
        }
        for(i=0;i<m;i++)
        {
        scanf("%lld",&b[i]);
        black[b[i]]++;
        }
        for(i=0;i<n;i++)
        {
            d=abs(s[i]-c[i]);
            while(d>0)
            {
                if(white[d]!=0)
                {
                  s[i]-=d;
                  white[d]--;
                  break;
                }
                else if(black[d]!=0)
                {
                    c[i]+=d;
                    black[d]--;
                    break;
                }
                d--;
            }
            ans+=abs(s[i]-c[i]);
        }
        printf("%lld\n",ans);
    }
	return 0;
}
  