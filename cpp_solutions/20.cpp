void sum_div_prim(int n, int &s)
{
    s = 0;
    int d = 2;
    while(n > 1)
    {
        if(n%d==0)
        {
            s += d;
            while(n%d==0) n /= d;
        }
        d++;
        if(n > 1 && d * d > n) d = n;
    }

}