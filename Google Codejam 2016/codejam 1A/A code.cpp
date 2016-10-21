#include<bits/stdc++.h>
using namespace std;
int main() 
{
    char s[1010],a[1010],b[1010],front,last;
    long t,count=0,i,j,k,ai,bi;
    scanf("%ld",&t);
    while(t--)
    {
        count++;
        cin>>s;
        front=s[0];
        a[0]=s[0];
        ai=1;bi=0;
        for(i=1;i<strlen(s);i++)
        {
            last=s[i];
            if(last>=front)
            {
             a[ai++]=last;
             front=last;
            }
            else
            {
                b[bi++]=last;
            }
        }
        printf("Case #%ld: ",count);
        for(i=ai-1;i>=0;i--)
        cout<<a[i];
        for(i=0;i<bi;i++)
        cout<<b[i];
        cout<<endl;
    }
  
	return 0;
}
 