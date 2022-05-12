#include <fstream>
using namespace std;
ifstream fin("subgraf.in");
ofstream fout("subgraf.out");
int n, a[101][101], x, y, muchii;

int prim(int n)
{
    if(n < 2) return 0;
    for(int d = 2; d * d <= n; d++)
        if(n%d==0) return 0;
    return 1;
}

int main()
{
    fin >> n;
    while(fin >> x >> y)
        if(!prim(x)&&!prim(y))
            a[x-1][y-1]=a[y-1][x-1]=1;

    for(int i = 0; i < n; i++)
        for(int j = 0; j <= i; j++)
            muchii += a[i][j];

    fout << muchii;
    fin.close();
    fout.close();
    return 0;
}
