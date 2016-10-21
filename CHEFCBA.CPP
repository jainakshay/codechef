#include<bits/stdc++.h>
using namespace std;
int main() 
{
  float a,b,c,d;
  cin>>a>>b>>c>>d;
  if((a/b) == (c/d) || (a/b)==(d/c) || (a/c)==(b/d) || (a/c)==(d/b) || (a/d)==(b/c) || (a/d)==(c/b))
  printf("Possible");
  else
  printf("Impossible");
	return 0;
}
 