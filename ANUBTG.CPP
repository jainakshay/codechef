     #include<iostream>
    using namespace std;
    int main()
    {
    unsigned long long a[1001],t,i,n,j,temp,amount;
    cin>>t;
    while(t>0)
    {
    amount=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    {
    if(a[j]<a[j+1])
    {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
    }
    }
    for(i=1;i<=n;i=i+4)
    amount=amount+a[i];
    for(i=2;i<=n;i=i+4)
    amount=amount+a[i];
    cout<<amount<<endl;
    t--;
    }
    return 0;
    }
