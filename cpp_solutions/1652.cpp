#include <iostream>
using namespace std;

const int Inf = 0x3f3f3f3f;
int n, m, cnt, c[101][101], a[101][101], x, y, w;

void Floyd_Warshall()
{
    int i, j, k;
    for(k = 1; k <= n; k++)
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(i != j && c[i][j] > c[i][k] + c[k][j])
                    c[i][j] = c[i][k] + c[k][j];
}

int main()
{
    cin >> n >> m;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i != j) c[i][j] = Inf;

    for(i = 1; i <= m; i++)
    {
        cin >> x >> y >> w;
        c[x][y] = w;
        a[x][y] = w;
    }

    Floyd_Warshall();

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(a[i][j] == c[i][j] && a[i][j] != 0) cnt++;

    cout << cnt;
}