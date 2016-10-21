//PROBLEM CODE:ROWCOLOP
#include <stdio.h>
#include<string.h>
long a[314160][314160];
int main()
{
  char s[10];
  long i,j,n,q,max=0,x,index;
  scanf("%ld %ld",&n,&q);
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      a[i][j]=0;
  }
  while(q--)
  {
    scanf("%s %ld %ld",s,&index,&x);
    if(strcmp("RowAdd",s)==0)
    {
        for(j=1;j<=n;j++)
        a[index][j]+=x;
    }
    if(strcmp("ColAdd",s)==0)
    {
        for(i=1;i<=n;i++)
        a[i][index]+=x;
    }
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    max=a[i][j]>max?a[i][j]:max;
  }
  printf("%ld",max);
	return 0;
}

