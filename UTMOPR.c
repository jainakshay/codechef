#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  long t,sum,i,j,n,k,a[10000];
  scanf("%ld",&t);
  while(t--)
  {
      sum=0;
      scanf("%ld %ld",&n,&k);
      for(i=0;i<n;i++)
      {
          scanf("%ld",&a[i]);
          sum+=a[i];
      }
      sum=pow(2,k-1)*(sum+1);
      if(sum%2==0)
      printf("even\n");
      else
      printf("odd\n");
  }
	return 0;
}
