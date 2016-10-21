//AIM: https://www.codechef.com/LTIME31/problems/DISTCODE
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
    bool check[26][26];
    long t,l,i,n,j,m,count;
    char s[10001];
    scanf("%ld",&t);
    while(t--)
    {
     count=0;
     scanf("%s",s);
     for(i=0;i<26;i++)
     for(j=0;j<26;j++)
     check[i][j]=false;
     l=strlen(s);
     for(i=0;i<l-1;i++)
     {
       m=s[i]-65;
       n=s[i+1]-65;
       if(check[m][n]==false)
       {
           check[m][n]=true;
           ++count;
       }
     }
     printf("%ld\n",count);
    }
	return 0;
}
 