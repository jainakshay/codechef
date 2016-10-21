#include <stdio.h>
#include<string.h>
int main()
{
	char j[101],s[101];
	int t,count,j1[123],s1[123],i,k;
	scanf("%d",&t);
	while(t--)
	{
	    count=0;
	    scanf("%s",j);
	    scanf("%s",s);
	    for(i=0;i<123;i++)
	    {
	        s1[i]=0;j1[i]=0;
	    }
	    for(i=0;i<strlen(j);i++)
	    {
	        k=j[i];
	        j1[k]++;
	    }
	    for(i=0;i<strlen(s);i++)
	    {
	        k=s[i];
	        s1[k]++;
	    }
	    for(i=0;i<123;i++)
	    {
	        if(s1[i]>0 && j1[i]>0)
	        count+=s1[i];
	    }
	    printf("%d\n",count);
	}
	return 0;
}

