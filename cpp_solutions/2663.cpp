int NrDiv(int n)
{
    int i, cnt = 0;
    for(i = 1; i * i <= n; i++)
    {
        if(n % i == 0) cnt += 2;
        if(i * i == n) cnt--;
    }
    return cnt;
}

int NextNrDiv(int n)
{
    int i;
    for(i = n + 1; i; i++)
        if(NrDiv(i) == NrDiv(n))
            return i;
}

int PrevNrDiv(int n)
{
    int i;
    for(i = n - 1; i >= 1; i--)
        if(NrDiv(i) == NrDiv(n))
            return i;
    return -1;
}