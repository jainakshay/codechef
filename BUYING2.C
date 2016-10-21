#include <stdio.h>
int main()
{
    int t,x,n,i,val,a[100],sum,flag;
    scanf("%d",&t);
    while(t--)
    {
     sum=0;flag=0;
     scanf("%d %d",&n,&x);
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     sum+=a[i];
     }
     val=sum/x;
     if(sum%x==0)
     printf("%d\n",val);
     else
     {
        for(i=0;i<n;i++)
        {
            if(sum-a[i]>=(val*x))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("-1\n");
        else
        printf("%d\n",val);
     }
    }
	return 0;
}
