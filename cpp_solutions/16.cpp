int sum_div(int n)
{
    int i, s = 0;
    for(i = 1; i * i <= n; i++)
    {
        if(n % i ==0)
        {
            s += n / i;
            s += i;
        }

        if(i * i == n)
            s -= i;
    }
    return s;
}