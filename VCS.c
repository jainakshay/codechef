#include<stdio.h>
int main()
{
int a[101],b[101],n,m,i,k,count1,count2,t,num;
scanf("%d",&t);
while(t--)
{ count1=0;
  count2=0;
 for(i=0;i<101;i++)
 {
 a[i]=0;b[i]=0;
 }
 scanf("%d %d %d",&n,&m,&k);
 for(i=0;i<m;i++)
 {
 scanf("%d",&num);
 a[num]++;
 }
 for(i=0;i<k;i++)
 {
 scanf("%d",&num);
 b[num]++;
 }
 for(i=1;i<n+1;i++)
 {
 if(a[i]==1 && b[i]==1)
 count1++;
 if(a[i]==0 && b[i]==0)
 count2++;
 }
 printf("%d %d\n",count1,count2);
}
return 0;
}
