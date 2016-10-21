#include<bits/stdc++.h>
using namespace std;
int main() 
{
  long t,i,j,zero,one,z,o,count;
  bool flag;
  char a[1000010],b[1000010];
  scanf("%ld",&t);
  while(t--)
  {
      count=0;
      flag=false;
      zero=0;
      one=0;
      z=0;   //keeps track of number of zeros that should be converted to one
      o=0;   //keeps track of number of ones that should be converted to zero
      scanf("%s",a);
      scanf("%s",b);
      for(i=0;i<strlen(a);i++)
      {
        if(a[i]=='0')
        zero++;
        else
        one++;
        
        if(a[i]!=b[i] && a[i]=='0')
        z++;
        else if(a[i]!=b[i] && a[i]=='1')
        o++;
      }
     if(z<o)
     {
        o-=z;
        count+=z;
        z=0;
     }
     else
     {
        z-=o;
        count+=o;
        o=0;
     }
     
     if(o>0 && zero>0)
     {
        count+=o;
        o=0;
     }
     if(z>0 && one>0)
     {
        count+=z;
        z=0;
     }
     if(z==0 && o==0)
     cout<<"Lucky Chef\n"<<count<<endl;
     else
     cout<<"Unlucky Chef\n";
  }
	return 0;
}
 