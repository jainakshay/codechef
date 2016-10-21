#include <stdio.h>
int main()
{
  int start[101],end[101],t,n,i,max,min,d[1000],j,max2;
  scanf("%d",&t);
  while(t--)
  {   for(i=0;i<1000;i++)
        d[i]=0;
      scanf("%d",&n);max=0;min=1000;
      for(i=0;i<n;i++)
      {
          scanf("%d",&start[i]);
          min=(start[i]<min)?start[i]:min;
      }
       for(i=0;i<n;i++)
      {
          scanf("%d",&end[i]);
          max=(end[i]>max)?end[i]:max;
      }
      for(i=0;i<n;i++)
      {
          for(j=min;j<=max;j++)
          {
          if(start[i]<=j && end[i]>j)
          d[j]++;
          }
      }

      max2=0;
      for(i=min;i<=max;i++)
      {
          max2=(d[i]>max2)?d[i]:max2;
      }
      printf("%d\n",max2);
  }
	return 0;
}

