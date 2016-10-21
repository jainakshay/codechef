#include <stdio.h>
#include<string.h>
int main()
{
    char a[101];
    long n,i,count,x,t,lmax,k;
    scanf("%ld",&t);
    while(t--)
    {   scanf("%s",a);
        scanf("%ld",&n);
        x=0;count=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='T')
            x+=2;
            else
            x++;
        }
        lmax=n*12/x;
        //printf("%ld %ld\n",x,lmax);
        for(i=1;i<=lmax;i++)
        {   k=x*i;
            count+=(n*12)-k;
        }
        printf("%ld\n",count);
    }
	return 0;
}

