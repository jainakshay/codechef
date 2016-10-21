#include<cstring>
#include <iostream>
using namespace std;

int main()
{
    char a[50];
    int t,j,i,len,count,flag;
    cin>>t;
    while(t-->0)
    {
        flag=0;
        cin>>a;
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            count=0;
            for(j=0;j<len;j++)
            {
                if(a[j]==a[i])
                count++;
            }
            if(count==len/2 && len%2==0)
            {
                flag=1;
                cout<<"YES\n";
                break;
            }
        }
        if(flag==0)
        cout<<"NO\n";
    }
	return 0;
}
