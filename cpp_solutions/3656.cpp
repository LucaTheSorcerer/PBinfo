int FGreater(int a[], int n, int x)
{
    int i = 0, mini = -1;
    for(i = 0; i < n; i++)
    {
        if(a[i] < mini)
            mini = a[i];
    }

    if(mini > x)
        return mini;
   
}