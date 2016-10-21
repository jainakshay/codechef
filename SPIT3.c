#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int l,large=0,small=0,digit=0,i;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	     if(a[i]>=65 && a[i]<=90)
	     large=1;
	     if(a[i]>=97 && a[i]<=122)
	     small=1;
	     if(a[i]>=48 && a[i]<=57)
	     digit=1;
	}
	if(l>=5 && large==1 && small==1 && digit==1 )
	printf("YES");
	else
	printf("NO");
	return 0;
}

