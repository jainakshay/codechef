#include <iostream>
using namespace std;
int main()
{
    unsigned long long max,a[300000],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    max=(a[0]&a[1]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]&a[j])>max)
            max=(a[i]&a[j]);
        }
    }
    cout<<max<<endl;
	return 0;
}
