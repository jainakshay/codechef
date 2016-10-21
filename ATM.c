#include<stdio.h>
int main()
{
float y;
int x;
scanf("%d",&x);
scanf("%f",&y);
if(x%5==0&&y>=x+0.50)
{
y=y-x-0.50;
}
printf("%.2f",y);
return 0;
}
