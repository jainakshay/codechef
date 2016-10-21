#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
 double a,b,c,s,ar,r;
 int t;
 cin>>t;
 while(t-- >0)
 {
     cin>>a>>b>>c;
     s=(a+b+c)/2;
     ar= sqrt(s*(s-a)*(s-b)*(s-c));
     r=((a*b*c)/(4*ar));
     printf("%.2f",r);
     printf("\n");
 }
	return 0;
}
