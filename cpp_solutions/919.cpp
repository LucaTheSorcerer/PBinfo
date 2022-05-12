void nr_cif_zero(int a, int &r)
{
    int cnt = 0;
    if(a == 0)
        cnt++;
    while(a)
    {
        if(a%10 == 0)
            cnt++;
        a /= 10;
    }
    r = cnt;
}