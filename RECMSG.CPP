#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[1001];
    long t,count,i,l;
    cin>>t;
    while(t-->0)
    {
        count=0;
        cin>>a;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            count=count+ (a[i]-96);
        }
        cout<<count<<endl;

    }
	return 0;
}
