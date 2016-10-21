#include <stdio.h>
int main()
{
    int t,n,i,a[101];
    long long c;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d %lld",&n,&c);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            c-=a[i];
        }
        if(c>=0)
        printf("Yes\n");
        else
        printf("No\n");
    }
	return 0;
}
