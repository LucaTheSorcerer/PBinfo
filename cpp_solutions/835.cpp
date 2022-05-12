void afisvec(int v[], int n)
{
    int i = 0;
    for(i = 0; i < n; i++)
        cout << v[i];
    return afisvec(v[i]);
}