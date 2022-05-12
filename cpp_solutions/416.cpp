#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("grade.in");
ofstream fout("grade.out");
int x, y, i, j, a[101][101],n, g[3000];

int main()
{
    fin >> n;
    while(fin >> x >> y)
        a[x][y]=a[y][x]=1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            if(a[i][j]) g[i]++;
    }
    for(i = 1; i <= n; i++)
    {
        fout << g[i] << " ";
    }
    return 0;
}

