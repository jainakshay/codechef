#include<bits/stdc++.h>
using namespace std;
struct game{
    long score,t,sub;
    char name[50];
};
bool compare(game a,game b)
{
    if(a.score!=b.score)
    return (a.score < b.score);
    
    if(a.t!=b.t)
    return(a.t < b.t);
    
    if(a.sub!=b.sub)
    return (a.sub < b.sub);
    
    int l1,l2,min,i;
    l1=strlen(a.name);
    l2=strlen(b.name);
    min=(l1<=l2)?l1:l2;
    for(i=0;i<min;i++)
    {
        if(a.name[i]!=b.name[i])
        return (a.name[i] < b.name[i]);
    }
    if(l1==l2)
    return (a.name[0]==b.name[0]);
    
    if(l2>l1)
    return (true);
    else
    return false;
}
int main() 
{
  long t,n,i;
  game g[100010];
  cin>>t;
  while(t--)
  {
      cin>>n;
      for(i=0;i<n;i++)
      {
          cin>>g[i].score>>g[i].t>>g[i].sub>>g[i].name;
      }
      sort(g,g+n,compare);
      for(i=0;i<n;i++)
      {
      cout<<g[i].score<<" "<<g[i].t<<" "<<g[i].sub<<" "<<g[i].name<<endl;
      }
  }
	return 0;
}
 