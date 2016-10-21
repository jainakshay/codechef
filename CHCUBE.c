#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    long test,i,j,flag;
    char f[10],b[10],l[10],r[10],t[10],base[10];
    scanf("%ld",&test);
    while(test--)
    {
        flag=0;
        scanf("%s %s %s %s %s %s",f,b,l,r,t,base);
        if((strcmp(l,f)==0 && strcmp(l,base)==0 )||(strcmp(l,f)==0 && strcmp(l,t)==0 ))
        flag=1;
        else if((strcmp(l,b)==0 && strcmp(l,base)==0 )||(strcmp(l,b)==0 && strcmp(l,t)==0 ))
        flag=1;
        else if((strcmp(b,r)==0 && strcmp(r,base)==0 )||(strcmp(b,r)==0 && strcmp(b,t)==0 ))
        flag=1;
        else if((strcmp(r,f)==0 && strcmp(r,base)==0 )||(strcmp(r,f)==0 && strcmp(r,t)==0 ))
        flag=1;
        if(flag==1)
        printf("YES\n");
        else
        printf("NO\n");
    }

	return 0;
}

