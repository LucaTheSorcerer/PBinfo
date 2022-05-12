int UCP(int n)
{
    if(n == 0) return 0;
    while(n)
    {
        int cif = n % 10;
        if(cif % 2 == 0)
            return cif;
        n /= 10;
    }
    return -1;
}