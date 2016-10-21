#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long i,j,n,m,u,v,count;
    char c;
    cin>>n>>m;
    vector <list <long> > flist(n+1),elist(n+1);
    list <long>:: iterator itr,itr2;
    bool arrf[100000],arre[100000];
    memset(arre,false,sizeof(arre));
    memset(arrf,false,sizeof(arrf));
    for(i=0;i<m;i++)
    {
        cin>>c>>u>>v;
        if(c=='F')
        {
           if(u==1)
           arrf[v]=true;
           else if(v==1)
           arrf[u]=true;
           flist[u].push_back(v);
           flist[v].push_back(u);
        }
        else
        {
           if(u==1)
           arre[v]=true;
           else if(v==1)
           arre[u]=true;
           elist[u].push_back(v);
           elist[v].push_back(u);
        }
    }
    count=0;
  long prevcount=0;
  do
  {
  prevcount=count;
  //friend of friend is friend
  bool visited[100001];
  memset(visited,false,sizeof(visited));
  queue <long> q;
  q.push(1);
  visited[1]=true;
  while(!q.empty())
  {
    long k=q.front();
    q.pop();
    itr=flist[k].begin();
    while(itr !=flist[k].end())
    {
        if(visited[*itr]==false)
        q.push(*itr);
        visited[*itr]=true;
        arrf[*itr]=true;
        itr++;
    }
  }
  //enemy of friend is enemy
 itr=flist[1].begin();
 while(itr !=flist[1].end())
 {
     itr2=elist[(*itr)].begin();
     while(itr2 != elist[(*itr)].end())
     {
        if(arre[(*itr2)]==false)
        {
         arre[(*itr2)]=true;
         elist[1].push_back(*(itr2));
         elist[*(itr2)].push_back(1);
        }
        itr2++;
     }
     itr++;
 }
 // friend of enemy is enemy
 itr=elist[1].begin();
 while(itr !=elist[1].end())
 {
     itr2=flist[(*itr)].begin();
     while(itr2 != flist[(*itr)].end())
     {
        if(arre[(*itr2)]==false)
        {
         arre[(*itr2)]=true;
         elist[1].push_back(*(itr2));
         elist[*(itr2)].push_back(1);
        }
        itr2++;
     }
     itr++;
 }
 //enemy of enemy  is friend
 itr=elist[1].begin();
 while(itr !=elist[1].end())
 {
     itr2=elist[(*itr)].begin();
     while(itr2 != elist[(*itr)].end())
     {
        if(arrf[(*itr2)]==false)
        {
        arrf[(*itr2)]=true;
        flist[1].push_back(*(itr2));
        flist[*(itr2)].push_back(1);
        }
        itr2++;
     }
     itr++;
 }
 arrf[1]=true;
 count=0;
 for(i=1;i<=n;i++)
 if(arrf[i]==true)
 count++;
 }while(count>prevcount);
 if(count> (n/2))
 cout<<"yes\n";
 else
 cout<<"no\n";
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
 