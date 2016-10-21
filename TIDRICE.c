#include <stdio.h>
#include<string.h>
int main()
{
    int t,count,i,j,n,flag;
    char a[102][22],ch[102];
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%s %c",a[i],&ch[i]);
        for(i=n-1;i>=0;i--)
        {  flag=1;
            for(j=i+1;j<n;j++)
            {
                if(strcmp(a[i],a[j])==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1 && ch[i]=='+')
            count++;
            else if(flag==1 && ch[i]=='-')
            count--;
        }
        printf("%d\n",count);
    }
	return 0;
}
