#include <stdio.h>
struct room
{
 int b[101],c;
};
int main()
{
    int t,m1[100001],i,j,n,max,total,p,m;
   struct room r[101];
    scanf("%d",&t);
	while(t--)
	{   total=0;
	    scanf("%d %d",&n,&m);
	    for(i=0;i<m;i++)
	    scanf("%d",&m1[i]);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&r[i].c);
	        for(j=0;j<r[i].c;j++)
	        scanf("%d",&r[i].b[j]);
	    }
	    for(i=0;i<m;i++)
	    {
	        max=0;
	        for(j=0;j<r[m1[i]].c;j++)
	        {
	            if(r[m1[i]].b[j]>max)
	            { max=r[m1[i]].b[j]; p=j;}
	        }
	        total+=max;
	        r[m1[i]].b[p]=-1;
	    }
	    printf("%d\n",total);
	}
	return 0;
}

