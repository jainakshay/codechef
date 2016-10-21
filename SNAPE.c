#include <stdio.h>
#include<math.h>
int main()
{
	int t;float l,r,b,rmax;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%f%f",&b,&l);
	    //r2+b2=l2
	    r=sqrt((l*l)-(b*b));
	    //l2+b2=r2
	    rmax=sqrt((l*l)+(b*b));
	    printf("%.5f %.5f\n",r,rmax);
	}
	return 0;
}

