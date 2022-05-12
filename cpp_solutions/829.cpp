int afis()
{
    int a[100001];
    int n = 0, i = 0;
    for(i = 0; ; i++)
    {
        cin >> a[i];
        n++;
        if(a[i]==0)
            break;
    }
    for(i = n - 1; i >= 0; i--)
        cout << a[i] << ' ';
}