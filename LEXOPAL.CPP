#include<bits/stdc++.h>
using namespace std;
int main() 
{
   long t,i,start,end;
   char a[100010];
   bool flag;
   scanf("%ld",&t);
   while(t--)
   {
       flag=true;
       scanf("%s",a);
       start=0;
       end=strlen(a)-1;
       while(start<=end)
       {
           if(a[start]=='.' && a[end]=='.')
           {
               a[start]='a';
               a[end]='a';
           }
           else if(a[start]=='.')
           {
               a[start]=a[end];
           }
           else if(a[end]=='.')
           {
               a[end]=a[start];
           }
           else if(a[start]!=a[end])
           {
              flag=false;
              break;
           }
           start++;
           end--;
       }
       if(flag)
       cout<<a<<endl;
       else
       cout<<"-1\n";
   }
	return 0;
}
 