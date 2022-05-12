#include <bits/stdc++.h>
using namespace std;
ifstream fin("traseucal.in");
ofstream fout("traseucal.out");

int n, m, is, js, ib, jb, a[11][11], cnt;
char s;
const int dic[] = {-2, -2, -1, 1, 2, 2, 1, -1};
const int djc[] = {-1, 1, 2, 2, 1, -1, -2 , -2};

int Inside(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void Afisare()
{
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
            if(a[i][j] == -1) fout << 0 << " ";
            else fout << a[i][j] << " ";
        fout << '\n';
    }
    cnt++;
}

void Back(int i, int j, int pas)
{
    int d;
    for(d = 0; d < 8; d++)
    {
        int inou = i + dic[d];
        int jnou = j + djc[d];
        if(Inside(inou, jnou) && a[inou][jnou] == 0)
        {
            a[inou][jnou] = pas;
            if(inou == n && jnou == m)
            {
                Afisare();
                return ;
            }
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
            fin >> a[i][j], a[i][j] = -a[i][j];
        }

    a[1][1] = 1;
    Back(1, 1, 2);
    if(cnt == 0)
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= m; j++)
                fout << 0 << " ";
            fout << '\n';
        }
    return 0;
}
