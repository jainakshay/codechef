#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
    char s1[200001],s2[200001];
    long i,j,count,flag,t,count1;
    scanf("%ld",&t);
    while(t--)
    {
        count=0;count1=0;
        scanf("%s",s1);
        scanf("%s",s2);
        i=0;j=0;flag=0;
        while(i<strlen(s1))
        {
            if(s1[i]=='.')
            {  
                if(flag==2)
                count++;
                while(s1[i]=='.')
                i++;
                flag=1;
            }
            else if(s2[i]=='.')
            {
                if(flag==1)
                count++;
                while(s2[i]=='.')
                i++;
                flag=2;
            }
            else
            break;
        }
        if(i!=strlen(s1))
        {
            printf("No\n");
            continue;
        }
        i=0;flag=0;
        while(i<strlen(s1))
        {
            if(s2[i]=='.')
            {  
                if(flag==1)
                count1++;
                while(s2[i]=='.')
                i++;
                flag=2;
            }
            else if(s1[i]=='.')
            {
                if(flag==2)
                count1++;
                while(s1[i]=='.')
                i++;
                flag=1;
            }
            else
            break;
        }
        if(i!=strlen(s1))
        printf("Yes\n%ld\n",count);
        else
        {
        count=(count<=count1)?count:count1;
        printf("Yes\n%ld\n",count);
        }
    }
    return 0;
}