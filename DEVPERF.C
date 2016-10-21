/***********************************************************
AIM:https://www.codechef.com/JAN16/problems/DEVPERF
AUTHOR: AKSHAY JAIN
DATE: 06/01/2016
STATUS: AC
SCORE: 100
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
long maximum(long a,long b,long c,long d)
{
    long ans=LONG_MIN,brr[4],i;
    brr[0]=a;brr[1]=b;brr[2]=c;brr[3]=d;
    for(i=0;i<=3;i++)
    ans=brr[i]>ans?brr[i]:ans;
    return ans;
}
int main() 
{
  char ele;
  long max,ans,i,j,t,n,m,left,right,top,bottom;
  long d1,d2,d3,d4;
  bool a[1001][1001],val;
  scanf("%ld",&t);
  while(t--)
  {
  val=true;
  for(i=0;i<1001;i++)
  for(j=0;j<1001;j++)
  a[i][j]=false;
  scanf("%ld %ld",&n,&m);
  for(i=0;i<n;i++)
  {
  scanf("%c",&ele);
  for(j=0;j<m;j++)
  {
      scanf("%c",&ele);
      if(ele=='*')
      {
      a[i][j]=true;
      val=false;
      }
  }
  }
  if(val==true)
  {
  ans=0;
  goto label;
  }
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  {
    if(a[i][j]==true)
    {
        top=i;
        break;
    }
  }
  for(i=n-1;i>=0;i--)
  for(j=0;j<m;j++)
  {
    if(a[i][j]==true)
    {
        bottom=i;
        break;
    }
  }
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
    if(a[j][i]==true)
    {
        left=i;
        break;
    }
  }
  for(i=m-1;i>=0;i--)
  for(j=0;j<n;j++)
  {
    if(a[j][i]==true)
    {
        right=i;
        break;
    }
  }
  ans=INT_MAX;
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  {
       d1=abs(i-top);
       d2=abs(i-bottom);
       d3=abs(j-left);
       d4=abs(j-right);
       max=maximum(d1,d2,d3,d4);
       ans=max<ans?max:ans;
  }
  ++ans;
  label:
  printf("%ld\n",ans);
  }
	return 0;
}
 