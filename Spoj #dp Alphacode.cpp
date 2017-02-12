#include<bits/stdc++.h>
using namespace std;
int main() 
{
    char str[10001];
    long i,j,ans,single[20000],dble[20000];
    while(1)
    {
        cin>>str;
        if(strlen(str)==1 && str[0]=='0')
        break;
        single[0]=1;
        dble[0]=0;
        for(i=1;i<strlen(str);i++)
        {
            if(str[i]=='0')
            {
                single[i]=0;
                if((10*(str[i-1]-48)+(str[i]-48))<=26)
                dble[i]=single[i-1];
                else
                dble[i]=0;
            }
            else 
            {
                if((10*(str[i-1]-48)+(str[i]-48))<=26)
                {
                    single[i]=single[i-1]+dble[i-1];
                    dble[i]=single[i-1];
                }
                else
                {
                   dble[i]=0;
                   single[i]=single[i-1]+dble[i-1];
                }
            }
        }
        cout<<single[strlen(str)-1]+dble[strlen(str)-1]<<endl;
    }
  
	return 0;
}
 