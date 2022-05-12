int sum3(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        if(a[i]%3==0)
            sum += a[i];
    }
    return sum;
}