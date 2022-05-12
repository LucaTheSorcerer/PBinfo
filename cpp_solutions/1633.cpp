void dublare1(int &n)
{
    int p = 1, c = n;
    while(c > 9)
    {
        p = p * 10;
        c = c/10;
    }

    n = n/p*11*p + n%p;
}