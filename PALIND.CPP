#include <stdio.h>
#include<string.h>
int main()
{
	long t,start,end,count,costa,costb;
	char a[10000];
	scanf("%ld",&t);
	while(t--)
	{   count=0;
	    scanf("%s",a);
	    scanf("%ld %ld",&costa,&costb);
	    start=0;
	    end=strlen(a)-1;
	    while(start<end)
	    {
	        if(a[start]==a[end] && a[start]!='/')
	        {
	            start++;
	            end--;
	        }
	        else if(a[start]==a[end] && a[start]=='/')
	        {
	            count+=(costa<costb)?costa:costb;
	            count+=(costa<costb)?costa:costb;
	            start++;
	            end--;
	        }
	        else if(a[start]!=a[end])
	        {
	        if(a[start]=='a' && a[end]=='/')
	        count+=costa;
	        else if(a[start]=='b' && a[end]=='/')
	        count+=costb;
	        else if(a[start]=='/' && a[end]=='a')
	        count+=costa;
	        else if(a[start]=='/' && a[end]=='b')
	        count+=costb;
     	    else if((a[start]=='a' && a[end]=='b') || (a[start]=='b' && a[end]=='a'))
	         {
	           count=-1;
	           break;
             }
             start++;
             end--;
	        }
	    }
	    printf("%ld\n",count);
	}
	return 0;
}

