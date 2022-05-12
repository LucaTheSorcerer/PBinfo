#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("lant.in");
ofstream fout("lant.out");
int n, m, x, y, a[21][21], X[21], P[21], p, q;

void Afisare(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << X[i] << " ";
    fout << '\n';
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
        if(!P[i])
            {
                P[i] = 1;
                X[k] = i;
                if(k == 1 || a[X[k-1]][X[k]] == 1)
                {
                    if(X[k] == q) Afisare(k);
                    else Back(k + 1);
                }
                P[i] = 0;
            }
}

int main()
{
    int i, j;
    fin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        fin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    fin >> p >> q;
    P[p] = 1, X[1] = p;
    Back(2);
    return 0;
}