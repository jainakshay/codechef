#include<string.h>
#include <stdio.h>
int main()
{
    int count,i,k;
    char a[1000];
     count=0;
     scanf("%s",a);
     for(i=0;i<strlen(a);i++)
     {
         k=a[i];
         k=k-48;
         switch(k)
         {
             case 1:
             count+=2;
             break;
             case 2:
             count+=5;
             break;
             case 3:
             count+=5;
             break;
             case 4:
             count+=4;
             break;
             case 5:
             count+=5;
             break;
             case 6:
             count+=6;
             break;
             case 7:
             count+=3;
             break;
             case 8:
             count+=7;
             break;
             case 9:
             count+=6;
             break;
             case 0:
             count+=6;
             break;
         }
     }
    printf("%d\n",count);
	return 0;
}

