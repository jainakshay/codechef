#include <stdio.h>
#include<math.h>
int main()
{
  long long a,b,i,t,count,e,s,flag;
  scanf("%lld",&t);
  while(t--)
  {
      count=0;
      scanf("%lld %lld",&a,&b);
      s=sqrt(a);
      if(s*s==a)
      i=a;
      else
      i=(s+1)*(s+1);
      while(i<=b)
      {
        flag=0;
        s=sqrt(i);
        while(i)
        {
            e=i%10;
            if(e==0||e==1||e==4||e==9)
            flag=1;
            else
            { flag=0; break;}
            i/=10;
        }
        if(flag==1)
        {
            count++;
            //printf("%lld,",s*s);
        }
        i=(s+1)*(s+1);
      }
      printf("%lld\n",count);
  }
	return 0;
}
