#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int n, m, i, j, x, y, w, r, mini = INT_MAX;

struct poz
{
    int c, val;
    double pon;
}G[1001];

int main()
{
    cin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        cin >> x >> y >> w;
        G[x].c++;
        G[y].c++;
        G[x].val += w;
        G[y].val += w;
    }
    for(i = 1; i <= n; i++)
        G[i].pon = G[i].val / G[i].c;

    for(i = 1; i <= n; i++)
        if(G[i].pon < mini)
        {
            mini = G[i].pon;
            r = i;
        }
    cout << r;
}