#include <stdio.h>
int partition(int a[],int start,int end)
{
    int piviot,i,j,s,temp,m,l;
    l=end-start+1;
    if(l%2!=0)
    m=start+((l-1)/2);
    else
    m=start+(l/2)-1;
    if((a[m]>a[start] && a[m]<a[end]) || (a[m]>a[end] && a[m]<a[start]))
    {
    piviot=a[m];
    temp=a[m];
    a[m]=a[start];
    a[start]=temp;
    }
    else if((a[start]>a[m] && a[start]< a[end]) || (a[start]>a[end] && a[start]< a[m]))
    piviot=a[start];
    else 
    {
        piviot=a[end];
        temp=a[end];
        a[end]=a[start];
        a[start]=temp;
    }
    s=start+1;
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
        p=partition(a,start,end);
        quick(a,start,p-1);
        quick(a,p+1,end);
    }
}
int main()
{
    int n,i,a[20];
    printf("ENTER NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    printf("ENTER ELEMENTS:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quick(a,0,n-1);
    printf("SORTED LIST:\n");
   for(i=0;i<n;i++)
    printf("%ld ",a[i]);
    return 0;
}
