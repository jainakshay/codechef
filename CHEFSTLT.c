#include<math.h> 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
  char a[1000],b[1000];
  int count1,count2,count,min,max,i,j,t;
  scanf("%d",&t);
  while(t--)
  {
      count1=0;count2=0,count=0;
      scanf("%s",a);
      scanf("%s",b);
      for(i=0;i<strlen(a);i++)
      {
          if(a[i]==b[i])
          count++;
          if(a[i]!=b[i] && (b[i]=='?' ||a[i]=='?'))
          count1++;
          else if(a[i]==b[i] && a[i]!='?')
          count2++;
      }
      max=strlen(a)-count2;
      min=strlen(a)-count1-count;
      printf("%d %d\n",min,max);
      
  }
	return 0;
}

