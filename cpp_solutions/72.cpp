int suma(int v[], int n, int x, int y)
{
    int s = 0, i = 0;
    for(i = 1;  i <= n; i++)
    {
        if(i < x || i > y)
            s += v[i];
    }
    return s;
}