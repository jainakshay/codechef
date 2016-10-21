#include <stdio.h>
#include<stdlib.h>
int compare (const void *a,const void *b)
{
return *(long*)a-*(long*)b;
}
int main()
{
long a[100000],n,i,j,count1,t,count2;
scanf("%ld",&t);
while(t-->0)
{
count2=0;
scanf("%ld",&n);
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
qsort(a,n,sizeof(long),compare);
i=0;
while(i<n-1)
{   count1=1;
    while(a[i]==a[i+1])
    {
    i++;
    count1++;
    }
    if(count1>count2)
    count2=count1;
    i++;
}
n=n-count2;
printf("%ld\n",n);
}
return 0;
}
