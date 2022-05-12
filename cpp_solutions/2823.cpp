int cifreImpare(int n)
{
    int i, a[11], ind, nr = 0;
    int cn = n;
    while(n)
    {
        a[ind] = n % 10;
        n /= 10;
        ind++;
    }

    for(i = ind; i >= 1; i--)
    {
        if(a[i]%2==0)
        nr = nr * 10 + a[i];
    }
    if(nr == 0 || nr == cn)
        return -1;
    return nr;
}