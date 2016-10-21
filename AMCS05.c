#include<math.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,d,m,a[26],b[26],i,j,l;
    char s1[1000],s2[1000];
    scanf("%d",&t);
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        scanf("%s %s %d",s1,s2,&d);
        for(i=0;i<strlen(s1);i++)
        a[(s1[i]-97)]++;
        for(i=0;i<strlen(s2);i++)
        b[(s2[i]-97)]++;
      //  for(i=0;i<26;i++)
    //    printf("%d ",b[i]);
        m=0;
        for(i=0;i<26;i++)
        m+=abs(a[i]-b[i]);
        if(m>d)
        printf("NO\n");
        else
        printf("YES\n");
    }
	return 0;
}

