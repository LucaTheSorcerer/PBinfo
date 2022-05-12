#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a[101][101], v[500], p = 0, i, j;
    cin >> n >> m;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cin >> a[i][j];
    for(i = 0; i < n; i += n-1)
        for(j = 0; j < m; j++)
        {
            v[p] = a[i][j];
            p++;
        }
    for(i = 1; i < n - 1; i++)
        for(j = 0; j < m; j += m - 1)
        {
            v[p] = a[i][j];
            p++;
        }
    sort(v, v + p);
    for(i = 0; i < p; i++)
    {
        if(v[i]!= v[i-1]) cout << v[i] << ' ';
    }
}