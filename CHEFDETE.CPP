/***********************************************************
AIM:https://www.codechef.com/FEB16/problems/CHEFDETE
AUTHOR: AKSHAY JAIN
DATE: 05/02/2016
STATUS: AC
SCORE: 100
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
using namespace std;
int main() 
{
  bool a[100001];
  long i,n,k;
  memset(a,false,sizeof(a));
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>k;
      a[k]=true;
  }
  for(i=1;i<=n;i++)
  if(a[i]==false)
  cout<<i<<" ";
	return 0;
}
