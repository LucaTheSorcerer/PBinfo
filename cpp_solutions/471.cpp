#include <fstream>
using namespace std;
ifstream fin("bipartit.in");
ofstream fout("bipartit.out");

int n, m, i, j, a[101][101], v[101], k, x, y, sw = 1;

int main()
{
    fin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        fin >> x >> y;
        a[x][y]=a[y][x]=1;
    }
    fin >> k;
    for(i = 1; i <= k; i++)
    {
        fin >> x;
        v[x]=1;
    }
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(a[i][j]==1 && v[i]==v[j])
                sw = 0;
    if(!sw)
        fout << "NU";
    else
        fout << "DA";
    return 0;
}

