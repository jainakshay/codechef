#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    bool x[100001];
    long a[100001],i,j,t,count,n;
    scanf("%ld",&t);
    while(t--)
    {
        for(i=1;i<100001;i++)
        x[i]=false;
        count=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
        scanf("%ld",&a[i]);
        if(x[a[i]]==false)
          {
           x[a[i]]=true;
           count++;
          }
        }
        printf("%ld\n",count);
    }
	return 0;
}

