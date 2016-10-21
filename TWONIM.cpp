#include<bits/stdc++.h>
using namespace std;
int xorfunction(int a[],int n)
{
    int x=0,i=0;
    for(i=0;i<n;i++)
    {
    if(a[i]==-1)
    continue;
    x=x^a[i];
    }
    return x;    
}
int main() 
{
    int t,i,a[1000],j,ans,n,k,temp,count;
    scanf("%d",&t);
    while(t--)
    {
        bool val=false;
        ans=1;  //ans should not be equal to zero initially.
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        count=0;
        while(1)
        {
        if(val==true)    // it means no element can be removed.
        ans=0;    
        else
        ans=xorfunction(a,n);
        if(ans==0)
        break;
        //cout<<ans<<" ";
        count++;
        for(i=0;i<n;i++)
        {
             val=true;
             if(a[i]==-1)
             continue;
             temp=a[i];
             a[i]=-1;
             if(xorfunction(a,n)==0)
             {
              a[i]=temp;  
             }
             else
             {
              val=false;      // means that an element is made -1;     
              break;     
             }
        }
        }
        if(count%2==0)
        cout<<"First\n";
        else
        cout<<"Second\n";
    }
	return 0;
}
 