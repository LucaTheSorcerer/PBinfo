int multiplu(int v[], int n, int k)
{
    int count = 0;
    int i = 0;
    for(i = 0; i < n; i++)
    {
        if(v[i]%10==k && v[i]%k==0)
            count++;
    }
    return count;
}