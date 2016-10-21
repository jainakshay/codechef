#include<stdio.h>
#include<stdbool.h>
bool leapyear(long y)
{
 bool leap;
 if (y%400 == 0)
 leap=true;
 else if(y%100==0)
 leap=false;
 else if(y%4==0)
 leap=true;
 return leap;
}
int main()
{   
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	long t,d,m,y,day,k,counter,i;
	bool leap;
	scanf("%ld",&t);
	while(t--)
	{
	counter=0;
	scanf("%ld %ld %ld",&d,&m,&y);
	for(i=1;i<y;i++)
	{
     leap=leapyear(i);
     if(leap==true)
     counter+=366;
     else
     counter+=365;
	}
	counter+=d;
	for(i=0;i<m-1;i++)
	counter+=a[i];
    if(leapyear(y) && m>2)
    counter++;
    counter%=7;
    printf("%ld\n",counter);
	}
	return 0;
}