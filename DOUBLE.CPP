    #include <iostream>
    using namespace std;
    int main()
    {
    long long t,n;
    scanf("%lld",&t);
    while(t-->0)
    {
    scanf("%lld",&n);
    if(n%2!=0)
    n--;
    printf("%lld \n",n);
    }
    return 0;
    }
