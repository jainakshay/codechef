//STATUS:AC
//PROBLEM CODE:TOTR
#include <stdio.h>
#include<string.h>
int main()
{
  int t,l,i,k;
  char a[101],s[30];
  scanf("%d %s",&t,s);
  while(t--)
  {
      scanf("%s",a);
      for(i=0;i<strlen(a);i++)
      {
          if(a[i]>=97 && a[i]<=122)
          {
            k=a[i]-97;
            a[i]=s[k];
          }
          else if(a[i]>=65 && a[i]<=90)
          {
            k=a[i]-65;
            a[i]=(s[k]-32);
          }
      }
      for(i=0;i<strlen(a);i++)
      {
        if(a[i]=='_')
        printf(" ");
        else
        printf("%c",a[i]);
      }
      printf("\n");
  }
	return 0;
}
