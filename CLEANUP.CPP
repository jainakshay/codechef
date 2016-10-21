/***********************************************************
AIM:https://www.codechef.com/problems/CLEANUP
AUTHOR: AKSHAY JAIN
DATE: 19/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long t,i,j,n,m,index[200000];
  bool a[200000];
  cin>>t;
  while(t--)
  {
    cin>>n>>m;
    memset(a,false,sizeof(a));
    for(i=0;i<m;i++)
    {
        cin>>j;
        a[j]=true;
    }
    j=0;
    for(i=1;i<=n;i++)
    {
    if(a[i]==false)
    index[j++]=i;
    }
    for(i=0;i<j;i+=2)
    printf("%ld ",index[i]);
    printf("\n");
    for(i=1;i<j;i+=2)
    printf("%ld ",index[i]);
    printf("\n");
  }
	return 0;
}
 