#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long t,i,j;
    char a[1001],b[1001];
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%s",&a);
        scanf("%s",&b);
        bool val=false;
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++)
            if(b[j]==a[i])
            {
                val=true;
                break;
            }
        }
        if(val==true)
        printf("Yes\n");
        else
        printf("No\n");
    }
  
	return 0;
}
 