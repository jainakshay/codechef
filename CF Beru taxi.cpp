#include<bits/stdc++.h>
using namespace std;
float dist(float a,float b,float x,float y)
{
	return (sqrt(((a-x)*(a-x))+((b-y)*(b-y))));
}
int main()
{
	float t,v,x,y,a,b,min;
	int i,n;
	cin>>a>>b;
	cin>>n;
	min=100000.01;
    for(i=0;i<n;i++)
    {
    	cin>>x>>y>>v;
    	t= dist(a,b,x,y)/v;
    	min=min>t?t:min;
    }
    printf("%.8f\n",min);
	return 0;
}