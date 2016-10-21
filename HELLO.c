#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int u,t,i,j,n,m[1000],c[1000],pos;
  float d,r[1000],profit[1000],val,val2,pmax;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%f %d %d",&d,&u,&n);
      for(i=0;i<n;i++)
      {
          scanf("%d %f %d",&m[i],&r[i],&c[i]);
          val=u*d;
          val2=r[i]*u*m[i];
          val2+=c[i];
          val2/=m[i];
         profit[i]=val-val2;
      }
      pmax=0;pos=0;
      for(i=0;i<n;i++)
      {
          if(profit[i]>pmax)
          {
             pos=i;
              pmax=profit[i];
          }
      }
      if(pmax==0.0)
      printf("0\n");
      else
      printf("%d\n",pos+1);
  }
	return 0;
}

