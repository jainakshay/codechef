#include <stdio.h>
int main()
{
    int t,n,i;
    char a1,a2,a3;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n>360)
        a1=a2=a3='n';
        else
        {
            if(360%n==0)
            a1='y';
            else
            a1='n';
            a2='y';
            if(n<=26)//USE N(N+1)=360*2
            a3='y';
            //maximum value of n for which cake can be divided into n unequal parts is 26.
            else
            a3='n';
        }
        printf("%c %c %c\n",a1,a2,a3);

    }
	return 0;
}
