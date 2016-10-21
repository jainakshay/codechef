/**********************************************************
AIM: https://www.codechef.com/OCT15/problems/ADTRI
AUTHOR: AKSHAY JAIN
DATE: 11/10/15
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
bool a[10000001];
int main() 
{
    memset(a,false,sizeof(a));
    long long t,i,n,l,k=0,p,b,c=0,m=2;
    while(c<=10000001)
    {
        for(n=1;n<m;++n)
        {   
          c=(m*m)+(n*n);
            for(i=1;;i++)
            {
                b=c*i;
                if(b>10000001)
                break;
                else
                a[b]=true;
            }
        }
        m++;
    }
  scanf("%lld",&t);
  while(t--)
  {
      scanf("%lld",&n);
      if(a[n]==true)
      printf("YES\n");
      else
      printf("NO\n");
  }
  return 0;
}
