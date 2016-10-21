#include<bits/stdc++.h>
using namespace std;
int main() 
{
  char a;
  long t,i,j,n;
  scanf("%ld",&t);
  while(t--)
  {
      scanf("%ld",&n);
      j=0;
      while(n--)
      {
        a=(j%26)+97;
        cout<<a;
        j++;
      }
      cout<<endl;
  }
	return 0;
}
 
 