//PROBLEM CODE:NOLOGIC
#include <stdio.h>
#include<string.h>
int main()
{
    char a[500],ans[26];
    int t,i,j,arr[26];
    scanf("%d",&t);
    gets(a);
    while(t--)
    {
        gets(a);
        //printf("%d\n",strlen(a));
        for(i=0;i<26;i++)
        arr[i]=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>=97 && a[i]<=122)
            arr[a[i]-97]++;
            else if(a[i]>=65 && a[i]<=90)
            arr[a[i]-65]++;
        }
        j=0;
        for(i=0;i<26;i++)
        {
            if(arr[i]==0)
            ans[j++]=i+97;
        }
        if(j==0)
        printf("~");
        else
        {
        for(i=0;i<j;i++)
        printf("%c",ans[i]);
        }
        printf("\n");
    }
	return 0;
}

