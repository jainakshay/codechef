//PROBLEM CODE:CHPLGNS
#include<math.h>
#include<stdlib.h>
#include <stdio.h>
#define cin(a) scanf("%lld",&a)
#define cout(a) printf("%lld ",a)
int compare(const void*a,const void*b)
{
  if (*(double*)a > *(double*)b) return 1;
  else if (*(double*)a < *(double*)b) return -1;
  else return 0;
}
long long b_search(double a[],double ele,long long n)
{
    long long pos,start,mid,end,flag=0;
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==ele)
        {
            pos=mid;
            flag=1;
            break;
        }
        else if(a[mid]>ele)
        end=mid-1;
        else
        start=mid+1;
    }
    if(flag==1)
    return pos;
    else
    return -1;
}
int main()
{
  double d[100000],dcopy[100000],d_,x_,y_,max;
  long long t,n,m,x[100000],y[100000],v[100000],pos[100000],i,j;
  cin(t);
  while(t--)
  {
      cin(n);
      for(i=0;i<n;i++)
      {   d[i]=0.00;
          cin(v[i]);
          for(j=0;j<v[i];j++)
          {
              cin(x[j]);
              cin(y[j]);
          }
          for(j=0;j<v[i];j++)
          {
             max=sqrt((x[j]*x[j])+(y[j]*y[j]));
             if(max>d[i])
             d[i]=max;
          }
        //printf("%lf ",d[i]);
      }
      for(i=0;i<n;i++)
      dcopy[i]=d[i];
      qsort(dcopy,n,sizeof(double),compare);
      for(i=0;i<n;i++)
      {
        pos[i]=b_search(dcopy,d[i],n);
        cout(pos[i]);
      }
  }
	return 0;
}

