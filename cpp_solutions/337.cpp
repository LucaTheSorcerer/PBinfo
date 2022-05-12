#include <bits/stdc++.h>
using namespace std;

int n, m, is, js, ib, jb, a[7][7];
const int dic[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int djc[] = { 1,  2, 2, 1,-1, -2, -2, -1};

int Inside(int i, int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void Afis()
{
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void Back(int i, int j, int pas)
{
    int d;
    for(d = 0; d < 8; d++)
    {
        int inou = i + dic[d];
        int jnou = j + djc[d];
        if(Inside(inou, jnou) && a[inou][jnou]==0)
        {
            a[inou][jnou] = pas;
            if(pas == n * m)
            {
                Afis();
                exit(0);
            }
            else Back(inou, jnou, pas + 1);
            a[inou][jnou] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;
    cin >> is >> js;
    a[is][js] = 1;
    Back(is, js, 2);
    return 0;
}
