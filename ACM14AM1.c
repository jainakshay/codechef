#include<math.h>
#include <stdio.h>
#include<string.h>
int main()
{
    int t,n,p,a,count,i;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d %d",&n,&p);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>=p)
            count++;
        }
        printf("%d\n",count);
    }
	return 0;
}

