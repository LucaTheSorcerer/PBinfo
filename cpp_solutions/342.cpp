#include <bits/stdc++.h>
using namespace std;
ifstream fin("soarece.in");
ofstream fout("soarece.out");
int n, m, is, js, ib, jb, a[11][11], cnt, b[11][11];
const int di[] = {-1, 0, 1 ,0};
const int dj[] = {0, 1, 0, -1};

int Inside(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void Back(int i, int j, int pas)
{
    int d;
    for(d = 0; d <= 3; d++)
    {
        int inou = i + di[d];
        int jnou = j + dj[d];
        if(Inside(inou, jnou) && a[inou][jnou] == 0)
        {
            a[inou][jnou] = pas;
            if(inou == ib && jnou == jb) cnt++;
            else Back(inou, jnou, pas+1);
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
            fin >> a[i][j], a[i][j] = -a[i][j];
    fin >> is >> js >> ib >> jb;
    a[is][js] = 1;
    Back(is, js, 2);
    fout << cnt++;

    return 0;
}
