#include<bits/stdc++.h>
using namespace std;
int main() 
{
  bool hash[256],flag;
  char s[200];
  int i;
  while(cin>>s)
  {
    flag=true;
    memset(hash,false,sizeof(hash));
    for(i=0;i<strlen(s);i++)
    {
        if(hash[s[i]]==true)
        {
        cout<<"Invalid\n";
        flag=false;
        break;
        }
        else
        hash[s[i]]=true;
    }
    if(flag)
    {
    cout<<"Valid\n";
    break;
    }
  }
	return 0;
}
 