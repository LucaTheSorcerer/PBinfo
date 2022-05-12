long long nrmaxim(int n)
{
    long long put = 1, p = 0, maxi = -1;
    long long aux = n;
    while(aux != 0)
    {
        put *= 10;
        p++;
        aux /= 10;
    }

    while(p != 0)
    {
        n = n%(put/10)*10+n/(put/10);
        if(n > maxi) maxi = n;
        p--;
    }

    return maxi;
}