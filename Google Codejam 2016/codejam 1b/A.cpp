#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //code goes here.!
    char s[5000];
    int arr[100],i,j,a[20];
    memset(a,0,sizeof(a));
    memset(arr,0,sizeof(arr));
    cin>>s;
    for(i=0;i<strlen(s);i++)
    arr[s[i]-65]++;
    
    while(arr['W'-65]--)
    {
    a[2]++;
    arr['T'-65]--;arr['O'-65]--;
    }
    while(arr['Z'-65]--)
    {
    a[0]++;
    arr['O'-65]--;arr['R'-65]--;arr['E'-65]--;
    }
    while(arr['U'-65]--)
    {
    a[4]++;
    arr['O'-65]--;arr['F'-65]--;arr['R'-65]--;
    }
    while(arr['X'-65]--)
    {
    a[6]++;
    arr['S'-65]--;arr['I'-65]--;
    }
    while(arr['G'-65]--)
    {
    a[8]++;
    arr['E'-65]--;arr['H'-65]--;arr['I'-65]--;arr['T'-65]--;
    }
    while(arr['O'-65]--)
    {
    a[1]++;
    arr['E'-65]--;arr['N'-65]--;
    }
    while(arr['F'-65]--)
    {
    a[5]++;
    arr['E'-65]--;arr['V'-65]--;arr['I'-65]--;
    }
    while(arr['T'-65]--)
    {
    a[3]++;
    arr['E'-65]--;arr['H'-65]--;arr['R'-65]--;arr['E'-65]--;
    }
    while(arr['S'-65]--)
    {
    a[7]++;
    arr['E'-65]-=2;arr['N'-65]--;arr['V'-65]--;
    }
    while(arr['I'-65]-->0)
    {
    a[9]++;
    arr['N'-65]-=2;arr['E'-65]--;
    }
    i=0;
    while(i<10)
    {
        while(a[i]--)
        {
        cout<<i;
        }
        i++;
    }
    cout<<endl;
}
int main() 
{
  long cases,i;
  cin>>cases;
  for(i=1;i<=cases;i++)
  {
    cout<<"Case #"<<i<<": ";
    solve();
  }
    return 0;
}
 