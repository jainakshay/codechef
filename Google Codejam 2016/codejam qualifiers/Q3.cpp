#include<bits/stdc++.h>
using namespace std;
long isprime(long n)
{
    long i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return i;
    }
 return 0;    
}
int main() 
{
    long t,i,k,n,j,l,num,val,itr,count,arr[100],tcase,tc;
    cin>>tcase;
    char s[100];
    for(t=1;t<=tcase;t++)
    {
        tc=0; //total count
        printf("Case #%ld:\n",t);
        cin>>n>>j;
        long long power=pow(2,n-2);
       // cout<<power;
        i=0;
        while(i<power && tc!=j)
        {
            count=0;
            for(l=2;l<=10;l++)
            {
                num=i;
                val=1;
                itr=1;
                while(num)
                {
                    if(num%2==1)
                    val+=pow(l,itr);
                    itr++;
                    num/=2;
                }
                val+=pow(l,n-1);
                //cout<<val<<" ";
                k=isprime(val);
               // cout<<k;
                if(k==0)
                break;
                else
                {
                 arr[l]=k;
                 count++;
                }
            }
            if(count==9)
            { 
                tc++;
                for(l=0;l<n;l++)
                s[l]='0';
                num=i; 
                int itr2=0;
                while(num)
                {
                    if(num%2==1)
                    s[itr2++]='1';
                    num/=2;
                }
                cout<<"1";
                for(l=n-3;l>=0;l--)
                cout<<s[l];
                cout<<"1 ";
                for(l=2;l<=10;l++)
                cout<<arr[l]<<" ";
                cout<<endl;
            }
            i++;
        }
    }
	return 0;
}
 