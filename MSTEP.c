#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
  long long a[501][501],i,j,row[250001],column[250001],count,n,t;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld",&n);
    memset(row,0,sizeof(row));
    memset(column,0,sizeof(column));
    count=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&a[i][j]);
            row[a[i][j]]=i;
            column[a[i][j]]=j;
        }
    }
    for(i=2;i<=n*n;i++)
    {
        count+=abs(row[i]-row[i-1]);
        count+=abs(column[i]-column[i-1]);
    }
    printf("%lld\n",count);
  }
	return 0;
}
 