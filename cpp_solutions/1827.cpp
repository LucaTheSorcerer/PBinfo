int P(int a[], int n, int &s)
{
    s = 0;
    int i = 0, j = 0;
    for(i = 0; i < n; i++)
    {
        int cnt = 0;
        for(j = 1; j * j <= a[i]; j++)
        {
            if(a[i]%j==0)
                cnt+=2;
            if(j * j == a[i])
                cnt--;
        }
        if(cnt == 2)
            s += a[i];
    }
}