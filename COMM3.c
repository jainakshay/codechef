#include<math.h>
#include <stdio.h>
#define cin(n) scanf("%d",&n)
inline float distance(int a,int b,int c,int d)
{
    float x;
    x=sqrt(pow(abs(a-b),2)+pow(abs(c-d),2));
    return x;
}
int main()
{
    int r,t,x1,x2,x3,y1,y2,y3;
    float d1,d2,d3;
    cin(t);
    while(t--)
    {
     cin(r);
     cin(x1);cin(y1);cin(x2);cin(y2);cin(x3);cin(y3);
     d1=distance(x1,x2,y1,y2);
     d2=distance(x2,x3,y2,y3);
     d3=distance(x1,x3,y1,y3);
     if(((d1<=r)&&(d2<=r))||((d3<=r)&&(d1<=r))||((d2<=r)&&(d3<=r)))
      printf("yes\n");
      else
      printf("no\n");
    }
	return 0;
}

