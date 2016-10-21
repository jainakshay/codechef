#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
 unsigned long long t,i,a[100000],n,e,start,end,suml=0,sumr=0;
 scanf("%lld",&t);
 while(t>0)
 {
    scanf("%lld",&n);
    for(i=0;i<n;i++)cin>>a[i];
    end=n-1;
    start=0;
    suml=a[start];
    sumr=a[end];
    while(end-start>2)
    {   if(suml==sumr)
         {
             start++;
             end--;
             suml=suml+a[start];
             sumr=sumr+a[end];
         }

        if(suml>sumr)
        {   end--;
            sumr=sumr+a[end];
        }
        else if(sumr>suml)
        {
           start++;
           suml=suml+a[start];
        }
    }
    if(suml==sumr && end-start==2)
    {
        start++;
        cout<<a[start]<<"\n";
    }
    else
        cout<<"NO EQUILIBRIUM\n";

     t--;
  }
 return 0;
}
