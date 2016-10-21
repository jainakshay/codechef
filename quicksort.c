#include <stdio.h>
int partition(int a[],int start,int end)
{
    int piviot,i,j,s,temp;
    s=start-1;
    piviot=a[end];
    for(i=start;i<end;i++)
    {
        if(a[i]<=piviot)
        {
         s++;
         temp=a[s];
         a[s]=a[i];
         a[i]=temp;
        }
    }
    s++;
    temp=a[s];
    a[s]=a[end];
    a[end]=temp;
    return s;
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
}
int main()
{
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
