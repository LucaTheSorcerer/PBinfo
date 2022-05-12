int prim(int n)
{
    int i;
    if(n == 0 || n == 1) return 0;
    for(i = 2; i * i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

void sub(int n, int &a, int &b)
{
    a = -1, b= -1;
    n--;
    while(!prim(n))
        n--;
    a = n;
    n--;

    while(!prim(n))
        n--;
    b = n;
}