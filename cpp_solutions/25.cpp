int cmmnr(int n)
{
    int a[11], ind = 0;
    while(n)
    {
        a[++ind] = n % 10;
        n /= 10;
    }

    int i = 0, j = 0;
    for(i = 1; i < ind; i++)
        for(j = i + 1; j <= ind; j++)
            if(a[i]<a[j])
                swap(a[i], a[j]);

    for(i = 1; i <= ind; i++)
        n = n * 10 + a[i];

    return n;
}