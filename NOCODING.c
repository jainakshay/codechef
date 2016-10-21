//PROBLEM CODE:NOCODING
#include<string.h>
#include <stdio.h>
int main()
{
    int t,i,count;
    char a[1010];
    scanf("%d",&t);
    while(t--)
    {
        count=2;
        scanf("%s",a);
        for(i=1;i<strlen(a);i++)
        {
            if(a[i]>a[i-1])
            count+=(a[i]-a[i-1])+1;
            else if(a[i]==a[i-1])
            count++;
            else
            count+=26-(a[i-1]-97)+(a[i]-97)+1;
        }
        //printf("count:%d\n",count);
        if(count > 11*strlen(a))
        printf("NO\n");
        else
        printf("YES\n");
    }
	return 0;
}

