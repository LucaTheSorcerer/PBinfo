#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf_partial_2.in");
ofstream fout("graf_partial_2.out");
int a[101][101], n, x, y, maxi, cnt;

int main()
{
    fin >> n;
    while(fin >> x >> y)
    {
        if(a[x][y]==0)
        {
            a[x][0]++;
            a[y][0]++;
        }
        a[x][y] = 1;
        a[y][x] = 1;
        maxi = max(maxi, max(a[x][0], a[y][0]));        
    }
    cnt = 0;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if((a[i][0] == maxi || a[j][0] == maxi) && (a[i][j]==1))
            {
                cnt++;
                a[i][j] = 0;
                a[j][i] = 0;
            }
        }
    }
    fout << cnt << endl;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++) fout << a[i][j] << ' ';
        fout << endl;
    }
    return 0;
}