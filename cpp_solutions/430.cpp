#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("izolate.in");
ofstream fout("izolate.out");
int n, m, a[101][101],x,y, sw, i, j, cnt;
int main()
{
    fin >> n;
    while(fin >> x >> y)
    {
        a[x][y]=a[y][x]=1;
    }
    for(i = 1; i <= n; i++)
    {
        sw = 0;
        for(j = 1; j <= n; j++)
            if(a[i][j]) sw = 1;
        if(sw==0) cnt++;
    }
    fout << cnt << " ";
    for(i = 1; i <= n; i++)
    {
        sw = 0;
        for(j = 1; j <= n; j++)
            if(a[i][j]) sw = 1;
        if(sw == 0) fout << i << " ";
    }
    return 0;
}
