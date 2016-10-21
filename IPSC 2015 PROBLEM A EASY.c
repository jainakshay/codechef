#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,i,j,max,num[100],sum[3];
    scanf("%d",&t);
    while(t--)
    {
          char a[20];
        scanf("%s",a);
        if(strlen(a)==2)
        {
            printf("%d\n",a[0]+a[1]-96);
            continue;
        }
        for(i=0;i<strlen(a);i++)
        {
            num[i]=a[i]-48;
        }
    sum[0]=(num[0]*10)+num[1]+num[2];
    sum[1]=(num[1]*10)+num[0]+num[2];
    sum[2]=(num[2]*10)+num[1]+num[0];
    max=sum[0];
  for(i=0;i<3;i++)
  max=sum[i]>max?sum[i]:max;
    printf("%d\n",max);
    }

	return 0;
}

