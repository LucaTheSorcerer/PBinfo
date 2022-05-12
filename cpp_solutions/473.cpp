#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream fin("bipartitcomplet.in");
ofstream fout("bipartitcomplet.out");
int a[101][101], x, y, k, v[2500], n, m;

int main()
{
    fin >> n >> k;
    int i, j, p;
    for(i = 1; i <= k; i++)
        fin >> v[i];
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            for(p = 1; p <= k; p++)
            {
                if(i == v[p])
                {
                    if(a[i][j] == 0) a[i][j] = 1;
                }
            }
        }
    }
    for(j = 1; j <= n; j++)
    {
        for(i = 1; i <= n; i++)
        {
            for(p = 1; p <= k; p++)
            {
                if(j == v[p])
                {
                    if(a[i][j] == 1) a[i][j] = 0;
                    else a[i][j] = 1;
                }
            }
        }
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }
    return 0;
}