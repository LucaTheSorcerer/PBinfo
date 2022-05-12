#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("graf_partial_1.in");
ofstream fout("graf_partial_1.out");
int a[105][105];
int n, i, j, x, y, minim = INT_MAX, maxim = -INT_MAX, cnt = 0;


int main()
{
    fin >> n;
    while(fin >> x >> y)
    {
        if(!a[x][y])
        {
            a[x][0]++;
            a[y][0]++;
        }
        a[x][y] = 1;
        a[y][x] = 1;
    }

    for(i = 1; i <= n; i++)
    {
        minim = min(minim, a[i][0]);
        maxim = max(maxim, a[i][0]);
    }
    for(i = 1; i <= n; i++)
    {
        if(a[i][0]==minim)
        {
            for(j = 1; j <= n; j++)
                if(a[j][0] == maxim && a[i][j]==1)
                {
                    a[i][j] = 0;
                    a[j][i] = 0;
                    cnt++;

                }
        }
    }
    fout << cnt << '\n';
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }
    return 0;
}
