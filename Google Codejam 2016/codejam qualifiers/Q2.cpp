#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,i,count,tcase,len,k;
    char arr[105];
    cin>>tcase;
    for(t=1;t<=tcase;t++)
    {
     count=0;
     cin>>arr;
     if(strlen(arr)==1 && arr[0]=='+')
     {
     printf("Case #%lld: 0\n",t);
     continue;
     }
     if(strlen(arr)==1 && arr[0]=='-')
     {
         printf("Case #%lld: 1\n",t);
         continue; 
     }
     i=0;
     while(i<strlen(arr))
     {
         if(arr[i]=='+')
         {
         while(arr[i]=='+' && i<strlen(arr))
         i++;
         
         if(i==strlen(arr))
         break;
         
         while(arr[i]=='-' && i<strlen(arr))
         i++;
         
         count+=2;
         }
         if(arr[i]=='-')
         {
             count++;
             while(arr[i]=='-' && i<strlen(arr))
             i++;
         }
     }
     printf("Case #%lld: %lld\n",t,count);
    }
	return 0;
}
 