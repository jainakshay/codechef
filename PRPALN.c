#include <stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long t,i,start,end,length,flag;
    scanf("%ld",&t);
    while(t--)
    {
        flag=0;
        scanf("%s",s);
        length=strlen(s);
        start=0;
        end=length-1;
        while(start<end)
        {
            if(s[start]==s[end])
            {
                start++;end--;
            }
            if(flag==0 && s[start]!=s[end])
            {
            if(s[start]==s[end-1])
            {
                end--; flag=1;length--;
            }
            else if(s[start+1]==s[end])
            {
                start++; flag=1;length--;
            }
            }
            if(s[start]!=s[end])
            break;
        }                 //end of internal while
      //printf("length:%ld start:%ld end:%ld\n",length,start,end);
        if(start-1==end && length%2==0)
        printf("YES\n");
        else if(start==end && length%2==1)
        printf("YES\n");
        else if(start-1!=end && length%2==0)
        printf("NO\n");
        else if(start!=end && length%2==1)
        printf("NO\n");
    }
	return 0;
}
