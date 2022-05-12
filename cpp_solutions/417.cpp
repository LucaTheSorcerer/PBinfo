#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
ifstream fin("gradmax.in");
ofstream fout("gradmax.out");
int n, a[101][101], x, y, i, j, maxim = -INT_MAX, cnt, b;

int main()
{
    fin >> n;
    while(fin >> x >> y)
        a[x][y]=a[y][x]=1;

    for(i = 1; i <= n; i++)
    {
        cnt = 0;
        for(j = 1; j <= n; j++)
        {
            if(a[i][j]) cnt++;
        }
        if(cnt > maxim)
        {
            maxim = cnt;
            b = 1;
        }
        else if(cnt == maxim) b++;
    }
    fout << b << " ";
    for(i = 1; i <= n; i++)
    {
        cnt = 0;
        for(j = 1; j <= n; j++)
            if(a[i][j]) cnt++;
            if(cnt==maxim) fout << i << " ";
    }
    return 0;
}
