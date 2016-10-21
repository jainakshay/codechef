#include<bits/stdc++.h>
using namespace std;
int main() 
{
     int v,e,v1,v2,w,i;
   scanf("%d %d",&v,&e);
   //Adj list is a vector of list of type pair(destination,weight).
   vector < list<pair<int,int> > > adjlist(v+1);
   for(i=0;i<e;i++)
   {
       scanf("%d %d %d",&v1,&v2,&w);
       adjlist[v1].push_back(make_pair(v2,w));
   }
   //Printing/Iterating through Adjlist.
   for(i=1;i<adjlist.size();i++)
   {
       cout<<i;
       //creating an iterator for the list to be declared at top usually.
       list<pair<int,int> >::iterator itr=adjlist[i].begin();
       while(itr !=adjlist[i].end())
       {
           cout<<"->"<<(*itr).first<<"("<<(*itr).second<<")";
           itr++;
       }
       cout<<endl;
   }
	return 0;
}


//Dijkstra
#include<bits/stdc++.h>
using namespace std;
int main() 
{
     long v,e,v1,v2,w,i,j,k,ans,dist[1001],s,min;
     bool arr[1001],flag=true,val;
    scanf("%ld %ld",&v,&e);
   //Adj list is a vector of list of type pair(destination,weight).
   vector < list<pair<int,int> > > adjlist(v+1);
    list<pair<int,int> >::iterator itr;
   for(i=0;i<e;i++)
   {
       scanf("%d %d %d",&v1,&v2,&w);
       adjlist[v1].push_back(make_pair(v2,w));
      // add this in case of undirected.
      //adjlist[v2].push_back(make_pair(v1,w));
   }
   //Dijkstra Implementation
   for(i=0;i<=v;i++)
   dist[i]=1000001;
   scanf("%ld",&s);
   dist[s]=0;
   memset(arr,false,sizeof(arr)); //mark visited vertices.
   while(flag)
   {
    min=0;
    for(i=1;i<=v;i++)
    {
     if(arr[i]==true)
     continue;
     if(dist[i]<dist[min])
     min=i;
    }
    arr[min]=true; //mark as visited.
    itr= adjlist[min].begin();
    while(itr !=adjlist[min].end())
    {
        if(dist[(*itr).first] > (dist[min] + (*itr).second))
        dist[(*itr).first] = (dist[min] + (*itr).second);
        itr++;
    }
    val=true;   
    for(i=1;i<=v;i++)
    {
        if(arr[i]==false)
        {
        val=false;    
        break;
        }
    }
    if(val==true) //All visited
    flag=false;
   }
   for(i=1;i<=v;i++)
   cout<<i<<": "<<dist[i]<<endl;
  return 0;
}
 