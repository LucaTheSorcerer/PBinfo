#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf_partial.in");
ofstream fout("graf_partial.out");
int n, x, y, i ,j, cnt, a[101][101];

int main()
{
    fin >> n;
    while(fin >> x >> y)
    {
        if(!a[x][y]) cnt++;
        a[x][y]=a[y][x]=1;
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i%2==j%2 && a[i][j]==1)
            {
                a[i][j]=a[j][i]=0;
                cnt--;
            }
        }
    }
    fout << cnt;
    return 0;
}
