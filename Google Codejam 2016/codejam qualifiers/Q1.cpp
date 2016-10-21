#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,num,i,count,tcase,n,k;
    bool arr[11];
    cin>>tcase;
    for(t=1;t<=tcase;t++)
    {
     memset(arr,false,sizeof(arr));
     count=0;
     cin>>n;
     if(n==0)
     {
     printf("Case #%lld: INSOMNIA\n",t);
     continue;
     }
     i=1;
     while(count!=10)
     {
      num=i*n;
      i++;
      while(num)
      {
        k=num%10;
        num/=10;
        if(arr[k]==false)
        {
        arr[k]=true;
        count++;
        }
      }
     }
     i--;
     num=n*i;
     printf("Case #%lld: %lld\n",t,num);
    }
	return 0;
}
 