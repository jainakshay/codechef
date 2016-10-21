//PROBLEM CODE:RRECIPIE
#include <stdio.h>
#include<string.h>
long ispalin(char a[])
{
    long start,end,flag=1;
    start=0;
    end=strlen(a)-1;
    while(start<=end)
    {
        if(a[start]==a[end] && a[start]!='?' && a[end]!='?')
        {
            start++;
            end--;
        }
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
  char a[1000005];
  long t,start,end,count;
  scanf("%ldn",&t);
  while(t--)
  {
      count=1;
      scanf("%s",a);
      start=0;
      end=strlen(a)-1;
      if(ispalin(a)==1)
      count=1;
      else
      {
      while(start<=end)
      {
        if(a[start]=='?' && a[end]=='?')
        count*=26;
        else if(a[start]=='?' || a[end]=='?')
        count*=1;
        else if(a[start]!=a[end])
        {
            count=0;
            break;
        }
        start++;
        end--;
       }
      }
      count=count%10000009;
	  printf("%ld\n",count);
  }
  return 0;
}

