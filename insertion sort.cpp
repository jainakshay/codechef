#include <iostream>
using namespace std;
void ins(int a[],int n)
{
    int i,j,key,flag;
    for(i=1;i<n;i++)
    {
        flag=1;
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
            flag=0;
        }
       j++;
       if(flag==0)
        a[j]=key;
    }
}

int main()
{
	int i,n,a[100];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	ins(a,n);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
