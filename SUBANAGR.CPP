/***********************************************************
AIM:https://www.codechef.com/problems/SUBANAGR
AUTHOR: AKSHAY JAIN
DATE: 28/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long a[101][27],i,j,n,l;
  char s[101];
  for(i=0;i<101;i++)
  for(j=0;j<27;j++)
  a[i][j]=0;
  scanf("%ld",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s",s);
    for(j=0;j<strlen(s);j++)
    a[i][s[j]-97]++;
  }
  long min;
  bool val=false;
  for(i=0;i<26;i++)
  {
    min=INT_MAX;  
    for(j=0;j<n;j++)
    {
      if(a[j][i]<min)
      min=a[j][i];
    }
    for(j=0;j<min;j++)
    {
    val=true;
    printf("%c",i+97);
    }
  }
  if(val==false)
  printf("no such string");
	return 0;
}
 