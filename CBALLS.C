/***********************************************************
AIM:https://www.codechef.com/JAN16/problems/CBALLS
AUTHOR: AKSHAY JAIN
DATE: 06/01/2016
STATUS: AC
SCORE: 100
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include <stdio.h>
#include<stdbool.h>
#include<math.h>
long gcd (long a,long b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}   
bool isprime(long n)
{
    long i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    long a[10005],n,t,i,j,count,k=0,g,d,min,sum,b[10000],num;
    for(i=2;i<10000;i++)
    {
        if(isprime(i))
        {
        b[k++]=i;
        }
    }
    num=k;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        count=0;
        if(n==1 && a[0]==1)
        count=1;
        else if(n==1 && a[0]!=1)
        count=0;
        else
        {
            for(i=1;i<n;i++)
            {
                if(a[i]<a[i-1])
                {
                    count+=a[i-1]-a[i];
                    a[i]=a[i-1];
                }
            }
            bool val=true;
            for(i=0;i<n;i++)
            {
                if(a[i]!=1)
                {
                val=false;
                break;
                }
            }
            if(val==true)
            {
                count=n;
                min=0;
                goto label;
            }
            g=a[0];
            for(i=1;i<n;i++)
            g=gcd(g,a[i]);
            if(g==1)
            {
            min=INT_MAX;
            for(i=0;b[i]<=a[n-1] && i<num;i++)
            {
                sum=0;
                for(j=0;j<n;j++)
                {
                 k=(a[j]%b[i]);
                 if(k!=0)
                 k=b[i]-k;
                 sum+=k;
                }
                min=(sum<min)?sum:min;
            }
            }
            else 
            min=0;
        }
        label:
        printf("%ld\n",count+min);
    }
	return 0;
}
 