#include <iostream>
#include<cmath>
using namespace std;
inline int trup(unsigned long long k)
{
    char a[50];int i=0,start=0,flag=1;
    while(k)
    {
        a[i]=k%10;
        i++;
        k=k/10;
    }
    i--;
  while(start<(i))
  {
      if(a[start]==a[i])
      {
          start++;
          i--;
      }
      else
      {
          flag=0;
          break;
      }
  }
 return flag;
}
inline int isprime(unsigned long long d)
{   int temp=1;
    unsigned long long i;
    for(i=2;i<=sqrt(d);i++)
    {
        if(d%i==0)
        {
         temp=0;
         break;
        }
    }
    return temp;
}
int main()
{
	unsigned long long n=0;
	scanf("%lld",&n);
	if(n%2==0)
	{
	    n++;
	}
    while(1>0)
    {
        if((trup(n)==1)&&(isprime(n)==1))
        break;
        else
        n+=2;
    }
    printf("%lld",n);
	return 0;
}
