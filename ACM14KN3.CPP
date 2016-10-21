#include <iostream>
#include<cstring>
using namespace std;
int main()
{   char s[101];
    int k;
    long long a[26],p,q,j,n,t,i,count,l;
    scanf("%lld",&t);
    while(t-->0)
    {   for(i=0;i<26;i++)
        a[i]=0;
        cin>>s;
        l=strlen(s);
        cin>>p>>q;
        for(i=0;i<l;i++)
        {   k=s[i];
            a[k-97]++;
        }
        for(i=0;i<26;i++)
        {
        a[i]=a[i]*p;
        }
        for(i=0;i<q;i++)
        {   count=0;
            cin>>n;
            if(n>(l*p))
            {
            cout<<"-1\n";
            }
            else
            {   j=0;
                while(count<n)
                {
                count=count+a[j];
                j++;
                }
                cout<<char(j+96)<<"\n";
            }
        }
    }
	return 0;
}
