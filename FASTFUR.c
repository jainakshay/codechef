#include <stdio.h>
#include<string.h>
int main()
{
	int count=0,a[26],b[26],i,s;
	char s1[1000],s2[1000];
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;i<26;i++)
	{
	    a[i]=0;
	    b[i]=0;
	}
	for(i=0;i<strlen(s1);i++)
	{
	    s=s1[i];
	    a[s-65]++;
	}
	for(i=0;i<strlen(s2);i++)
	{
	    s=s2[i];
	    b[s-65]++;
	}
	for(i=0;i<26;i++)
	{
	    if(a[i]==b[i])
	    count+=a[i];
	}
	printf("%d",count);
	return 0;
}

