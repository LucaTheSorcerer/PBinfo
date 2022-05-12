void duplicare(int n, int &d)
{
    int a[30], p = 1, i = 0, dd = n;
    while(n)
    {
        a[p] = n % 10;
        n /= 10;
        p++;
    }
    p--;
    d = 0;

    for(i = p; i >= 1; i--)
    {
        if(a[i]%2==0)
            d = d * 10 + a[i], d = d * 10 + a[i];
        else
            d = d * 10 + a[i];
    }
    if(d == dd)
        d = -1;
}