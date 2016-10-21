#include <stdio.h>
/*
long b[100000];
void clockwise(long a[],long d,long n)
{
    long i,k=0;
      for(i=d;i<n;i++)
      b[k++]=a[i];
      for(i=0;i<d;i++)
      b[k++]=a[i];
      for(i=0;i<n;i++)
      a[i]=b[i];
}
void anticlockwise(long a[],long d,long n)
{
    long i,k=0;
    for(i=n-d;i<n;i++)
    b[k++]=a[i];
    for(i=0;i<n-d;i++)
    b[k++]=a[i];
    for(i=0;i<n;i++)
    a[i]=b[i];
}
void read(long a[],long d)
{
    printf("%ld\n",a[d]);
}
*///ROTATION
int main()
{
  long a[100000],i,d,index,n,m;
  char ch;
  scanf("%ld %ld",&n,&m);
  for(i=0;i<n;i++)
  scanf("%ld",&a[i]);
  while(m--)
  {
    scanf("\n%c %ld",&ch,&d);
    switch(ch)
    {
        case 'C':
        clockwise(a,d,n);
        break;
        case 'A':
        anticlockwise(a,d,n);
        break;
        case 'R':
        read(a,(d-1));
    }
  }
	return 0;
}
