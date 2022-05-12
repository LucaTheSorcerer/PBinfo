#include <bits/stdc++.h>
using namespace std;
ifstream fin("soarece1.in");
ofstream fout("soarece1.out");
int n, m, is, js, ib, jb, a[11][11], gata;
char s;
const int di[] = {0, 0, 1, -1};
const int dj[] = {1, -1, 0, 0};

int Inside(int i, int j)
{
    return i >= 1 && i <= n && j >=1 && j <= m;
}

void Afisare()
{
    int i, j;
    gata++;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
            if(a[i][j]== -1) fout << 0 << " ";
            else fout << a[i][j] << " ";
        fout << "\n";
    }
}

void Back(int i, int j, int pas)
{
    int d;
    for(d = 0; d < 4 && !gata; d++)
    {
        int inou = i + di[d];
        int jnou = j + dj[d];
        if(Inside(inou, jnou) && a[inou][jnou] == 0)
        {
            a[inou][jnou] = pas;
            if(inou == ib && jnou == jb) Afisare();
            else Back(inou, jnou, pas + 1);
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
        {
            fin >> s;
            if(s == '_') a[i][j] == 0;
            else if(s == '#') a[i][j] = -1;
            else if(s == 'S') a[i][j] = 0, is = i, js = j;
            else if(s == 'B') a[i][j] = 0, ib = i, jb = j;
        }
    a[is][js] = 1;
    Back(is, js, 2);
    if(gata==0)
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
                fout << 0 << " ";
            fout << '\n';
        }
    return 0;
}


