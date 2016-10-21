#include <stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    long i,j,l,t,count;
    scanf("%ld",&t);
    while(t--)
    {
        count=0;
        scanf("%s",a);
        l=strlen(a);
        for(i=1;i<l;i++)
        {
            if(a[i]==a[i-1])
            {
                count++;
            }
        }
        printf("%ld\n",count);
    }
	return 0;
}
