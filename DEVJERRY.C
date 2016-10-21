#include<math.h>
#include <stdio.h>
#define cin(n) scanf("%lld",&n)
#define cout(n) printf("%lld\n",n)
int main()
{
  long long t,n,d,sx,sy,ex,ey,bx,by;
  cin(t);
  while(t--)
  {
   scanf("%lld %lld %lld %lld %lld %lld %lld",&n,&sx,&sy,&ex,&ey,&bx,&by);
   if(sx==ex && bx==sx)
   {
       if(sy>by && ey<by || sy<by &&ey>by)
        d=abs(sy-ey)+2;
        else
        d=abs(sy-ey);
   }
   else if(sy==ey && by==sy)
   {
       if(sx>bx && ex<bx || sx<bx &&ex>bx)
        d=abs(sx-ex)+2;
        else
        d=abs(sx-ex);
   }
   else
   d=abs(sx-ex)+abs(sy-ey);
   cout(d);
  }
	return 0;
}

