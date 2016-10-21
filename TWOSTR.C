#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
  char s1[100],s2[100];
  int i,t,flag;
  scanf("%d",&t);
  while(t--)
  {
      flag=1;
     scanf("%s",s1);
     scanf("%s",s2);
     for(i=0;i<strlen(s1);i++)
     {
         if(s1[i]==s2[i] || s1[i]=='?' || s2[i]=='?')
         continue;
         else
         {
         flag=0;
         break;
         }
     }
     if(flag)
     printf("Yes\n");
     else
     printf("No\n");
  }
	return 0;
}
 