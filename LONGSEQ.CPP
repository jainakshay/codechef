//https://www.codechef.com/SEPT16/problems/LONGSEQ
#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long t,i,n,c0,c1;
  char a[100010];
  scanf("%ld",&t);
  while(t--)
  {
      scanf("%s",a);
      c0=0;c1=0;
      for(i=0;i<strlen(a);i++)
      {
          if(a[i]=='0')
          c0++;
          else
          c1++;
      }
      if(c1==1 || c0==1)
       printf("Yes\n");
      else
      printf("No\n");
  }
	return 0;
}
 