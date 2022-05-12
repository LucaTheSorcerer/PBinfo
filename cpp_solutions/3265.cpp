#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pacman_xi.in");
ofstream fout("pacman_xi.out");
long long n, m, a[55][55];

int main()
{
    int i, j;
    fin >> n >> m;
    a[1][1] = 1;
    for(i = 1; i <= n; i++)
        for(j = 2; j <= m; j++)
            a[i][j] = a[i-1][j-1] + a[i][j-1];

    fout << a[n][m] << '\n';
    return 0;
}