#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("componenteconexe.in");
ofstream fout("componenteconexe.out");
int n, a[105][105];
int c[105], viz[105];

void bf(int varf, int nrc)
{
    int p, u;
    p = u = 1;
    viz[varf] = nrc;
    c[1] = varf;
    while(p <= u)
    {
        int k = c[p];
        for(int i = 1; i <= n; i++)
            if(viz[i] == 0 && a[k][i] == 1)
            {
                u++;
                viz[i] = nrc;
                c[u] = i;
            }
        p++;
    }
}

int main()
{
    int i, j;
    fin >> n;
    while(fin >> i >> j)
    {
        a[i][j]=a[j][i]=1;
    }
    int nrc = 0;
    for(int i = 1; i <= n; i++)
        if(viz[i]==0)
        {
            nrc++;
            bf(i, nrc);
        }
    fout << nrc << endl;
    for(int i = 1; i <= nrc; i++)
    {
        for(int j = 1; j <= n; j++)
            if(viz[j] == i)
                fout << j << " ";
        fout << endl;
    }
    return 0;
}