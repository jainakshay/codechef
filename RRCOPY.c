#include<math.h>
#include <stdio.h>
#include<stdlib.h>
int main()
 {
    long a[100000],b[100001],count,t,i,j,n;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        count=0;
        for(i=0;i<=100000;i++)
        b[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            b[a[i]]++;
        }
        for(i=0;i<=100000;i++)
        {
            if(b[i]!=0)
            count++;
        }
        printf("%ld\n",count);
    }
	return 0;
}

