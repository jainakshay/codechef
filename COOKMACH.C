#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
  long long t,a,b,n,i,counter;
  scanf("%lld",&t);
  while(t--)
  {
      counter=0;
      scanf("%lld %lld",&a,&b);
      if(!(a&(a-1)))
      {
       if(a>=b)
        {
          while(a!=b)
          {
             a/=2;
             counter++;
          }
        }
       else
        {
          while(a!=b)
          {
              a*=2;
              counter++;
          }
        }
      }
      else 
      { 
          while((a&(a-1)))
          {
            if(a%2==0)
            a/=2;
            else
            a=(a-1)/2;
            counter++;
          }
         if(a>=b)
         {
          while(a!=b)
          {
             a/=2;
             counter++;
          }
         }
         else
         {
          while(a!=b)
          {
              a*=2;
              counter++;
          }
         }
      }
      printf("%lld\n",counter);
  }
	return 0;
}
 