#include<math.h>
#include <stdio.h>
int partition(int a[],int start,int end)
{
    int i,p,j,temp;
    i=start-1;
    p=a[end];
    for(j=start;j<end;j++)
    {
        if(a[j]<=p)
        {
            i++;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[end];
    a[end]=temp;
    return i+1;
}
void quick(int a[],int start,int end)
{
    int p;
    if(start<end)
    {
        p=partition(a,start,end);
        quick(a,start,p-1);
        quick(a,p+1,end);
    }
    else
    return;
}

int main()
{
    int a[100],i,start,t,n,k,m,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        start=0; sum=0;
        quick(a,0,n-1);
        k=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum==m)
            {
            k=1;
            break;
            }
            else if(sum>m)
            {
                sum-=a[start];
                start++;
            }
        }
        if(k==1)
        printf("Yes\n");
        else
        printf("No\n");
    }
	return 0;
}

