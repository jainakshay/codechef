#include<string.h>
#include <stdio.h>
int main()
{
    int t,i,a[26],b[26],k,l,flag;
    char s[1000];
    scanf("%d",&t);
    while(t--)
    {   flag=1;
        for(i=0;i<26;i++)
        { a[i]=0;b[i]=0;}
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<=(l/2-1);i++)
        {
            k=s[i];
            a[k-97]++;
        }
        for(i=((l/2)+(l%2));i<l;i++)
        {
            k=s[i];
            b[k-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {flag=0; break;}
        }
        if(flag==1)
        printf("YES\n");
        else if(flag==0)
        printf("NO\n");
    }
	return 0;
}
