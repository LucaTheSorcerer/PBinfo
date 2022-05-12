int cautare(int n, double a[], double v)
{
    int k = -1;
    int i = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == v)
            k = i;
    }
    return k;
}