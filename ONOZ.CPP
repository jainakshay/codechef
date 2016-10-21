#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int i,j,count,t,h,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&h,&m);
        count=0;
        for(i=0;i<h;i++)
        {
            if(i<10 || (i>=10 && (i%10==i/10) && i<100))
            {
                for(j=1;j<m;j++)
                {
                 bool val=true;
                 int k=j;
                  while(k)
                  {
                      if(k%10==i%10)
                      k/=10;
                      else
                      {
                      val=false;
                      break;
                      }
                  }
                  if(val==true)
                  {
                  count++;
                  //cout<<i<<":"<<j<<" ";
                  }
                }
            }
        }
        count++;  // for 0:000
        cout<<count<<endl;
    }
  
	return 0;
}
 