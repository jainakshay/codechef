/***********************************************************
AIM: https://www.codechef.com/OCT15/problems/TIMEASR
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
  long t,i,j,h,m,min;
  float hr,diff,a,l,u;
  scanf("%ld",&t);
  while(t--)
  {
      scanf("%f",&a);
      hr=0.00;
      u=a+(1.0/120);
      l=a-(1.0/120);
      for(i=0;i<12;i++)
      {   
          min=0;
          for(j=0;j<60;j++)
          {
              diff=fabs(hr-min);
              if(diff>180)
              diff=360-diff;
              if(diff>=l && diff<=u)
                {
                    h=i;
                    m=min/6;
                    if(h<10 && m<10)
                    printf("0%ld:0%ld\n",h,m);
                    else if(h<10 && m>=10)
                    printf("0%ld:%ld\n",h,m);
                    else if(h>=10 && m<10)
                    printf("%ld:0%ld\n",h,m);
                    else
                    printf("%ld:%ld\n",h,m);
                }
            min+=6;
            hr+=0.5;
          }
      }
  }
  return 0;
}