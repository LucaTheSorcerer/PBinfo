#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, p = 0, a[101][101], v[1001], s = 0, i, j;
    cin >> n >> m;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]%2==0)
            {
                s += a[i][j];
                v[p++] = a[i][j];
            }
        }
    sort(v, v+p);
    for(i = 0; i < p; i++)
    {
        if(v[i]==v[i+1])
            s -= v[i];
    }
    cout << s;
}