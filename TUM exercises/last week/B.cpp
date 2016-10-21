#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int pow_arr[]={1,8,12,5};
    char x[250];
    long i,j,ans=0,k=0;
    scanf("%s",x);
    for(i=strlen(x)-1;i>=0;i--)
    {
    x[i]=x[i]-48;
    ans=(ans+(x[i]*pow_arr[k])%13)%13;
    k++;
    k=k%4;
    }
    ans+=3;
    ans=ans%13;
    if(ans==0)
    ans=13;
    printf("%ld\n",ans);
}
int main() 
{
  long t,i;
  scanf("%ld",&t);
  for(i=1;i<=t;i++)
  {
    cout<<"Case #"<<i<<": ";
    solve();
  }
	return 0;
}
 