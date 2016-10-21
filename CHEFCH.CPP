#include <iostream>
#include<cstring>
#define min(a,b) a>=b?b:a
using namespace std;
int main()
{
  int t;
  long i,j,count,l,count1,count2;
  char a[100000],b[100000];
  scanf("%d",&t);
  while(t-->0)
  { count=0;count1=0;
    cin>>a;
    strcpy(b,a);
    l=strlen(a);
    if(a[0]=='+')
    {
        for(i=1;i<l;i++)
        { if(a[i]==a[i-1])
        {   count++;
            if(a[i]=='+')
            a[i]='-';
            else
            a[i]='+';
        }
        }
        b[0]='-';
        count1++;
        for(i=1;i<l;i++)
        {
            if(b[i]==b[i-1])
            {
            count1++;
            if(b[i]=='+')
            b[i]='-';
            else
            b[i]='+';
            }
        }
    }
    else
    {
        for(i=1;i<l;i++)
        { if(a[i]==a[i-1])
        {   count++;
            if(a[i]=='+')
            a[i]='-';
            else
            a[i]='+';
        }
        }
        b[0]='+';
        count1++;
        for(i=1;i<l;i++)
        {
            if(b[i]==b[i-1])
            {
            count1++;
            if(b[i]=='+')
            b[i]='-';
            else
            b[i]='+';
        }
        }
    }
    count2=min(count1,count);
    printf("%ld\n",count2);
  }
	return 0;
}
