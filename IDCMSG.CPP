#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[10001];
    int t,l,i,k,val;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d",&k);
        scanf("%s",a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            val=a[i];
            val=val+k-97;
            val=val%26;
            val+=97;
            a[i]=val;
        }
        printf("%s\n",a);
    }
	return 0;
}
