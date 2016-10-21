#include <iostream>
#include<cstring>
using namespace std;
int main()
{
  long i,j,l1,l2;
  int ac[26],bc[26],t,k1,k2,flag;
  char a[50000],b[50000];
  scanf("%ld",&t);
  while(t-->0)
  { flag=1;
    for(i=0;i<26;i++)
    {
        ac[i]=0;
        bc[i]=0;
    }
    cin>>a>>b;
    l1=strlen(a);l2=strlen(b);
    if(l1!=l2)
    printf("NO \n");
    else
    {
        for(i=0;i<l2;i++)
        {
            k1=a[i];
            ac[k1-97]++;
            k2=b[i];
            bc[k2-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(ac[i]!=bc[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("YES \n");
        if(flag==0)
        printf("NO \n");
    }
  }
return 0;
}
