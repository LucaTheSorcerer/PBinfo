#include <iostream>
using namespace std;
int n, m, a[101][101];

void Warshall()
{
    int k, i, j;
    for(k = 1; k <= n; k++)
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(!a[i][j])
                    a[i][j] = a[i][k] * a[k][j];
}

int main()
{
    cin >> n >> m;
    int x, y;
    int i;
    for(i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }

    Warshall();
    for(x = 1; x <= n; x++)
    {
        for(y = 1; y <= n; y++)
            cout << a[x][y] << ' ';
        cout << '\n';
    }
}