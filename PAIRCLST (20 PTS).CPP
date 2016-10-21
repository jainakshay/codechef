#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int g[305][305],n,m,k,min,src,dst,spl,w,i,j,l;
  bool a[400];
  memset(a,false,sizeof(a));
  for(i=0;i<301;i++)
  {
  for(j=0;j<301;j++)
  g[i][j]=100000;
  g[i][i]=0;
  }
  scanf("%d %d %d",&n,&m,&k);
  for(i=0;i<k;i++)
  {
    scanf("%d",&spl);  
    a[spl]=true;
  }
  for(i=0;i<m;i++)
  {
    scanf("%d %d %d",&src,&dst,&w);
    g[src][dst]=w;
    g[dst][src]=w;
  }
  //floyd warshel algorithm
  for(i=1;i<=n;i++)
  {
    for(j=0;j<=n;j++)
    {
        for(l=1;l<=n;l++)
        {
            if(g[i][j]> g[i][l]+g[l][j])
            g[i][j]=g[i][l]+g[l][j];
        }
    }
  }
  min=INT_MAX;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
     //   cout<<g[i][j]<<" ";
        if(a[i]&a[j] && i!=j)
        {
            min=(g[i][j]<min)?g[i][j]:min;
        }
    }
   // cout<<endl;
  }
  printf("%d",min);
	return 0;
}
 