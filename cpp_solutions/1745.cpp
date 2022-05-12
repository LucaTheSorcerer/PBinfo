int minDivPrim(int n)
{
    int x = 1, i = 2;
    while(n > 1)
    {
        if(n % i == 0)
        {
            while(n % i == 0) n /= i;
            x *= i;
        }
        i++;

        if(n > 1 && i * i > n) i = n;
    }
    return x;
}