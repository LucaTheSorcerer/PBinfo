#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("msuma.in");
ofstream fout("msuma.out");
int a[101][101], b[101][101], c[101][101];
int main()
{
    int n, m, p, q, max1 = 0, max2 = 0;
    fin >> n >> m;
    int i, j;
     for(i = 1; i <= n; i++)
        for(j = 1; j <=  m; j++)
            fin >> a[i][j];
    fin >> p >> q;
    for(i = 1; i <= p; i++)
        for(j = 1; j <= q; j++)
            fin >> b[i][j];
    if(n > p) max1 = n;
    else max1 = p;
    if(m > q) max2 = m;
    else max2 = q;
    for(i = 1; i <= max1; i++)
        for(j = 1; j <= max2; j++)
            c[i][j] = a[i][j] + b[i][j];
    fout << max1 << " " << max2 << endl;
    for(i = 1; i <= max1; i++)
    {
        for(j = 1; j <= max2; j++)
            fout << c[i][j] << " ";
        fout << endl;
    }
    return 0;
}