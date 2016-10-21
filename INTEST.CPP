    #include <iostream>
    inline void scanint(long long int* x)
    {
    register char c = getchar_unlocked();
    *x = 0;
    for(; (c<48)||(c>57);c = getchar_unlocked());
    for(; (c>47)&&(c<58);c = getchar_unlocked())
    *x = (long long int)((((*x)<<1) + ((*x)<<3)) + c - 48);
    }
    inline void printint(int n)
    {
    if(n == 0)
    {
    putchar_unlocked('0');
    putchar_unlocked('\n');
    }
    else
    {
    char buf[20];
    buf[19] = '\n';
    int i = 18;
    while(n)
    {
    buf[i--] = n % 10 + '0';
    n /= 10;
    }
    while(buf[i] != '\n')
    putchar_unlocked(buf[++i]);
    }
    }
    using namespace std;

    int main()
    {
    long long a[100000],n,k,i,count=0;
    scanint(&n);
    scanint(&k);
    for(i=0;i<n;i++)
    {
    scanint(&a[i]);
    if(a[i]%k==0)
    count++;
    }
    printint(count);
    return 0;
    }
