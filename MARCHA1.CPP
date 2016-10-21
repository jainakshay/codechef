/***********************************************************
AIM:https://www.codechef.com/problems/MARCHA1
AUTHOR: AKSHAY JAIN
DATE: 23/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long a[100],i,j,ans,n,m,t,k,count;
  scanf("%ld",&t);
  while(t--)
  {
      bool val=false;
      scanf("%ld %ld",&n,&m);
      for(i=0;i<n;i++)
      scanf("%ld",&a[i]);
      k=pow(2,n);
      for(i=0;i<k;i++)
      {
        count=0;
        ans=0;
        j=i;
        while(j)
        {
            if(j%2==1)
            ans+=a[count];
            count++;
            j=j>>1;
        }
        if(ans==m)
        {
            val=true;
            break;
        }
      }
      if(val==true)
      printf("Yes\n");
      else
      printf("No\n");
  }
	return 0;
}
 