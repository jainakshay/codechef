/***********************************************************
AIM: segment tree implementation	
AUTHOR: AKSHAY JAIN
DATE: 27/10/15
STATUS:NA
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define left(i) (2*i)+1
#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
#define right(i) (2*i)+2
long st[200001];
void construct(long st[],long a[],long start,long end,long pos)
{
	if(start==end)
	{
		st[pos]=a[start];
		return;
	}
	long mid=(start+end)/2;
	construct(st,a,start,mid,left(pos));
	construct(st,a,mid+1,end,right(pos));
	st[pos]=st[left(pos)]+st[right(pos)]; //modify according to question
	//min||max||sum
}
long RangeSum(long st[],long l,long r,long start,long end,long pos)
{
	if(l<=start && r>=end) //total overlap
   {
	return st[pos];
   }
   if(l>end || r<start) //NO overlap
   {
	return 0;
   }
   long mid=(start+end)/2;
   return (RangeSum(st,l,r,start,mid,left(pos)) + RangeSum(st,l,r,mid+1,end,right(pos)));
}
void update(long st[],long start,long end,long idx,long val,long pos)
{
 if(start==end)
 {
 	st[pos]=val;
 	return;
 }
  long mid=(start+end)/2;
  if(start <= idx && idx <= mid)
     {
       update(st,start, mid,idx,val,left(pos));
     }
   else
   {
   	update(st,mid+1,end,idx,val,right(pos));
   }
   st[pos]=st[left(pos)]+st[right(pos)];
}
int main() 
{
 long i,n,a[100001],q,l,r,t,sum;
 scanf("%ld %ld",&n,&q);
 for(i=0;i<n;i++)
 scanf("%ld",&a[i]);
 construct(st,a,0,n-1,0);
 while(q--)
 {
    scanf("%ld %ld %ld",&t,&l,&r);
    if(t==0)
    {
        update(st,0,n-1,l,r,0);
    }
    else
    {
        sum=RangeSum(st,l,r,0,n-1,0);
        printf("%ld\n",sum);
    }
 }
	return 0;
}
 