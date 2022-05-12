int fact(int n)
{
    if(n == 1 || n == 0)
        return 1;
    else
    {
        int nr = 1, i = 0;
        for(i = 2; i <= n; i++)
            nr *= i;
        return nr;
    }
}