//PROBLEM CODE:COOLING
#include <stdio.h>
#include<stdlib.h>
int compare(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int w[50],l[50],i,count,t,n,j;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&w[i]);
        for(i=0;i<n;i++)
        scanf("%d",&l[i]);
        qsort(w,n,sizeof(int),compare);
        qsort(l,n,sizeof(int),compare);
       /* for(i=0;i<n;i++)
        printf("%d ",w[i]);
        printf("\n");
        for(i=0;i<n;i++)
        printf("%d ",l[i]);
        printf("\n");   */
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
             {
                 if(l[j]>=w[i])
                 {   count++;
                     l[j]=-1;
                     break;
                 }
             }
        }
        printf("%d\n",count);
    }
	return 0;
}
