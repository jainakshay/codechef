/***********************************************************
AIM:https://www.codechef.com/BYTE2016/problems/BYTES11
AUTHOR: AKSHAY JAIN
DATE: 07/02/2016
STATUS: AC
SCORE: NA
***********************************************************/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
long long j_max,i,j,a[100001],max,n;
  cin>>n;
  max=-1;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
      max=a[i]>max?a[i]:max;
  }
  j_max=-1;
  for(i=0;i<n;i++)
  {
      j=0;   
      while(a[i]==max && i<n)
      {
          i++;
          j++;
      }
      j_max=j>j_max?j:j_max;
  }
  cout<<j_max<<endl;
	return 0;
}