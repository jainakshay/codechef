#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
  ll a,b,c,i,j,money[100000];
  bool valid[100001];
  memset(valid,true,sizeof(valid));
  cin>>a>>b>>c;
  vector <list<ll> > adjlist(a+1); //stores relations as unidirectional graph.
  for(i=1;i<a;i++)
  cin>>money[i];
  
  ll u,v;
  for(i=0;i<b;i++)
  {
      cin>>u>>v;
      adjlist[u].push_back(v);
      adjlist[v].push_back(u);
  }

  for(i=0;i<c;i++)
  {
    cin>>u>>v;
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
    valid[u]=false;
    valid[v]=false;
  }
  list <ll>:: iterator itr;
  // BFS for eliminating all relatives
  bool visited[100001];
  memset(visited,false,sizeof(visited));
  queue <ll> q;
  q.push(a);
  visited[a]=true;
  while(!q.empty())
  {
    ll k=q.front();
    q.pop();
    itr=adjlist[k].begin();
    while(itr !=adjlist[k].end())
    {
        if(visited[*itr]==false)
        q.push(*itr);
        valid[*itr]=false;
        visited[*itr]=true;
        itr++;
    }
  }
  ll max=-1;
  for(i=1;i<a;i++)
  {
    max=(money[i]>max && valid[i]==true)?money[i]:max;
  }
  if(max==-1)
  cout<<"impossible\n";
  else
  cout<<max<<endl;
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
 