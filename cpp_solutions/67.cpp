bool prim(int n)
{
    int i;
    if(n == 1 || n == 0) return 0;
    for(i = 2; i * i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

bool a_prim(int n)
{
    int i, cnt = 0;
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0) cnt += 2;
        if(i * i == n) cnt--;
    }

    if(cnt == 2)
    {
        int a, b;
        for(i = 2; i * i <= n; i++)
            if(n % i == 0)
                a = i, b = n / i;

        if(prim(a) && prim(b))
            return 1;
    }
    return 0;
}
