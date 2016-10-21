#include <stdio.h>
#include<stdlib.h>
/*
int compare(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
*/
int main()
{
    int a[100],n,i,flag,count,t,max,min,pmax;
    scanf("%d",&t);
    while(t--)
    {   flag=1;
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        //qsort(a,n,sizeof(int),compare);
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {flag=0;
             break;}
        }
        while(flag!=1)
        {
        max=a[0];pmax=0;
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            {
            pmax=i;
            max=a[i];
            }
        }
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(min>a[i])
            min=a[i];
        }
        count+=max-min;
        for(i=0;i<n;i++)
        {
            if(i!=pmax)
            a[i]+=max-min;
        }
        for(i=1;i<n;i++)
        {
            if(a[i-1]==a[i])
            flag=1;
            else
            {
                flag=0;
                break;
            }
        }
        }
        printf("%d\n",count);
    }
	return 0;
}
