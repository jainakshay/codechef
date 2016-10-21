#include <stdio.h>
#include<math.h>
int main()
{
    int n,count=0,x1,x2,x3,y1,y2,y3,d1,d2,d3;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        d1=pow(abs(x1-x2),2) + pow(abs(y1-y2),2);
        d2=pow(abs(x2-x3),2) + pow(abs(y2-y3),2);
        d3=pow(abs(x3-x1),2) + pow(abs(y3-y1),2);
        //printf("%d %d %d\n",d1,d2,d3);
        if((d1+d2==d3) ||(d2+d3==d1) ||(d1+d3==d2))
        count++;
    }
    printf("%d",count);
	return 0;
}
