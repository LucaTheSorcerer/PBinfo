#include <fstream>
using namespace std;
ifstream fin("adiacenta1.in");
ofstream fout("adiacenta1.out");
int n, a[101][101], i, j, x, y, maxim;

int main()
{

    while(fin >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
        if(x > maxim)
            maxim = x;
        if(y > maxim)
            maxim = y;
    }
    n = maxim;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            fout << a[i][j] << ' ';
        fout << '\n';
    }
    return 0;
}

