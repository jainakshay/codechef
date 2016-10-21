#include<bits/stdc++.h>
using namespace std;
void solve()
{
    char c[20],j[20];
    cin>>c>>j;
    int i=0;
    bool val=false;
    while(c[i]=='?' && j[i]=='?')
    {
            c[i]='0';
            j[i]='0';
            i++;
            val=true;
    }
    while(i<strlen(c))
    {
        int k=i;
        int count=0;
        while(c[k]=='?' && j[k]=='?')
        {
        count++;
        k++;
        }
        if(count>1)
        val=true;
        
       if(val==true && c[i]=='?' && j[i]=='?')
       {
           while(count-->1)
           {
               c[i]='0';
               j[i]='0';
               i++;
           }
           c[i]='1';
           j[i]='0';
       }
       else if(val==false &&c[i]=='?' && j[i]=='?')
       {
           c[i]='9';
           j[i]='0';
       }
        else if(c[i]=='?')
        c[i]=j[i];
        else if(j[i]=='?')
        j[i]=c[i];
        
        i++;
    }
    cout<<c<<" "<<j<<endl;
}
int main() 
{
  long cases,i;
  cin>>cases;
  for(i=1;i<=cases;i++)
  {
    cout<<"Case #"<<i<<": ";
    solve();
  }
    return 0;
}
 