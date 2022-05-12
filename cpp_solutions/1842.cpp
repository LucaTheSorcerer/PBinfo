int F(int n, int a[], int& k)
{
    k = -1;
    int i = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            if(k == -1)
                k = 0;
            k = k * 10 + a[i];
        }
    }
}