#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("listavecini.in");
ofstream fout("listavecini.out");
int x, y, i, j, a[101][101],n;

int main()
{
    fin >> n;
    while(fin >> x >> y)
        a[x][y]=a[y][x]=1;
    for(i = 1; i <= n; i++)
        for(j=1; j <= n; j++)
            a[i][0]=a[i][0]+a[i][j];
    for(i = 1; i <= n; i++)
    {
        fout << a[i][0] << " ";
        for(j = 1; j <= n; j++)
            if(a[i][j])
                fout << j << " ";
        fout << '\n';
    }
    return 0;
}
