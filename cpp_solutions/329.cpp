#include <bits/stdc++.h>
using namespace std;
ifstream fin("bila.in");
ofstream fout("bila.out");

int n, m, a[25][25], b[25][25], maxim, is, js, ib, jb;
const int di[] = {0, 0, 1, -1};
const int dj[] = {1, -1, 0, 0};

int Inside(int i, int j)
{
    if(i == 1 || i == n || j == 1 || j == m) return 1;
    else return 0;
}

void Back(int i, int j, int pas)
{
    int d;
    if(Inside(i, j))
    {
        maxim = max(maxim, pas-1);
    }
    else
        for(d = 0; d < 4; d++)
        {
            int inou = i + di[d];
            int jnou = j + dj[d];
            if(!a[inou][jnou] && b[inou][jnou] < b[i][j])
            {
                a[i][j] = pas;
                Back(inou, jnou, pas + 1);
                a[inou][jnou] = 0;
            }
        }
}


int main()
{
    fin >> n >> m;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            fin >> b[i][j];
    for(i = 0; i <= n + 1; i++)
        a[i][0] = a[i][m+1]=-1;
    for(i = 0; i <= m + 1; i++)
        a[0][i] = a[n+1][i] = -1;
    fin >> is >> js;
    a[is][js] = 1;
    Back(is, js, 2);
    fout << maxim;
    return 0;
}
