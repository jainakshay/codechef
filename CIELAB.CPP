#include <iostream>
using namespace std;
int main()
{
	int b,a,s,p,k;
	scanf("%d %d",&b,&a);
	s=b-a;
	if((s%10)!=9)
	s++;
	else
	s--;
	printf("%d",s);
	return 0;
}
