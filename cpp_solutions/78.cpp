void citmat(int a[][100], int &n, int &m)
{
    cin >> n >> m;
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> a[i][j];
}
