#include <iostream>
using namespace std;
int a[101][101];
int main()
{
    int n, m, x, y, i, j, k;
    cin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            for(k = 1; k <= n; k++)
                if(a[i][j] == 1 && a[k][i] == 1 && a[j][k] == 1)
                    cout << i << ' ' << j << ' ' << k << endl;

    return 0;

}