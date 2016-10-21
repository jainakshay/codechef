/***********************************************************
AIM:https://www.codechef.com/COBA2016/problems/CB2
AUTHOR: AKSHAY JAIN
DATE: 11/01/2016
STATUS: AC
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
  long long t,n,i,a[10000],j,k;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    sort(a,a+n);
    j=n-1;i=0;k=0;
    while(k!=n)
    {
        k++;
        if(k%2==0)
        printf("%lld ",a[i++]);
        else
        printf("%lld ",a[j--]);
    }
    printf("\n");
  }
	return 0;
}
 
