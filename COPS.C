#include<limits.h>
#include<math.h> 
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main() 
{
    long t,x,y,m,i,j,count,a[1000],n,val,k;
    bool house[1000];
    scanf("%ld",&t);
    while(t--)
    {
        count=0;
        scanf("%ld %ld %ld",&m,&x,&y);
        memset(house,true,sizeof(house));
        for(i=0;i<m;i++)
        scanf("%ld",&a[i]);
        n=x*y;
        for(i=0;i<m;i++)
        {
         val=(a[i]-n)>0?(a[i]-n):0;    
         for(j=val;j<=a[i]+n;j++)
         house[j]=false;
        }
        for(i=1;i<101;i++)
        if(house[i]==true)
        count++;
        printf("%ld\n",count);
    }
   
	return 0;
}
 