int numarare(int v[100], int n)
{
    int cnt = 0, i = 0;
    for(i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] == v[i-1])
            cnt++;
    }
    return cnt;
}