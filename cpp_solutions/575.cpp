#include <iostream>
#include <climits>
using namespace std;

int a[111][111], n, m;

int main()
{
    int f[1001] = {0}, ok = 0, x, y, maxim = -INT_MAX, i;
    cin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        cin >> x >> y;
        if(!a[x][y])
        {
            a[x][0]++;
            a[y][0]++;
        }
        f[y]++;
    }
    for(i = 1; i <= n; i++)
        if(f[i] > maxim) maxim = f[i];

    for(i = 1; i <= n; i++)
        if(f[i]==maxim) cout << i << " ";
    return 0;
}
