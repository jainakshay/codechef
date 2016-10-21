#include<string.h>
#include <stdio.h>
int main()
{
    char l[50][50],f[50][50];
    int n,k,i,j,d,a,flag;
    scanf("%d %d",&k,&n);
    for(i=0;i<k;i++)
    scanf("%s",f[i]);
    for(i=0;i<n;i++)
    scanf("%s",l[i]);
    for(i=0;i<n;i++)
    {   flag=1;
        if(strlen(l[i])>=47)
          printf("Good\n");
        else
        {
          for(j=0;j<k;j++)
          {
              for(d=0;i<strlen(l[i]);d++)
              {
                  for(a=0;a<strlen(f[i]);a++)
                  {
                      if(l[i][d]!=f[j][a])
                      {
                          flag=0;
                          break;
                      }
                  }
                  if(flag==1)
                  {
                      printf("Good\n");
                      break;
                  }
              }
              if(flag==0)
              printf("Bad\n");
          }
        }
    }

	return 0;
}
