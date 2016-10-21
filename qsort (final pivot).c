#include <stdio.h>
long count=0;
int partition(int a[],int start,int end)
{
    int piviot,i,j,s,temp;
    s=start+1;
    temp=a[end];
    a[end]=a[start];
    a[start]=temp;
    piviot=a[start];
    for(i=start+1;i<=end;i++)
    {
        if(a[i]<piviot)
        {
         temp=a[s];
         a[s]=a[i];
         a[i]=temp;
         s++;
        }
    }
    s--;
    temp=a[s];
    a[s]=a[start];
    a[start]=temp;
    return s;
}
void quick(int a[],int start,int end)
{
    int p;
    if(start<end)
    {
        count+=end-start;
        p=partition(a,start,end);
        quick(a,start,p-1);
        quick(a,p+1,end);
    }
}
int main()
{
    int n,i,a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quick(a,0,n-1);
   // for(i=0;i<n;i++)
    printf("%ld ",count);
    return 0;
}
