int echilibrat(int n)
{
    int i, sp = 0, si = 0, cnt = 0;
    while(n)
    {
        if(cnt % 2 == 0)
            sp += n % 10;
        else
            si += n % 10;
        n /= 10;
        cnt++;
    }
    if(sp%2 == 0 && si%2==1)
        return 1;
    return 0;
}