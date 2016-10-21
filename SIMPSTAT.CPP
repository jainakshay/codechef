#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long t,a[100000],k,n,i,j;
  double avg;
  scanf("%ld",&t);
  while(t--)
  {
     avg=0.00;
     scanf("%ld %ld",&n,&k);
     for(i=0;i<n;i++)
     scanf("%ld",&a[i]);
     sort(a,a+n);
     for(i=k;i<(n-k);i++)
     avg+=a[i];
     avg/=(n-2*k);
     printf("%.6lf\n",avg);
  }
	return 0;
}
 