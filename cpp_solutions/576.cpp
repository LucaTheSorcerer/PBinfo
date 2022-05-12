#include <iostream>
using namespace std;
int a[101][101];

int main()
{
    int n, m, x, y, r, i, j;
    cin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            for(r = 1; r <= n; r++)
            {
                if(a[i][j] == 1 && a[r][i] == 1 && a[j][r] == 1)
                    cout << i << ' ' << j << ' ' << r << endl;
            }
    return 0;
}