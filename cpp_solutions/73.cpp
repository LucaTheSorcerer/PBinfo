int sum3(int a[], int n)
{
    int i = 0, s = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i]%3==0)
            s += a[i];
    }

    return s;
}