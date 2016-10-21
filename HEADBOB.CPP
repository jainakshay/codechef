#include <iostream>
using namespace std;

int main()
{
	int t,n,i,flag;
	char a[1001];
	cin>>t;
	while(t-- >0)
	{   flag=0;
	    cin>>n;
	    cin>>a;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<74)
	       {
	           flag=1;
	           break;
	       }
	       else if(a[i]>78)
	       {
	           flag=2;
	           break;
	       }
	    }
	    if(flag==1)
	    cout<<"INDIAN\n";
	    else if(flag==2)
	    cout<<"NOT INDIAN\n";
	    else if(flag==0)
	    cout<<"NOT SURE\n";
	  }
	return 0;
}
