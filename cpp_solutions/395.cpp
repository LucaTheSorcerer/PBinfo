#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("comori.in");
ofstream fout("comori.out");

int n, m, a[204][204], s[204][204];

int main()
{
    fin >> n >> m;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            fin >> a[i][j];

    for(i = 1; i <= n; i++)
        s[i][1] = a[1][i];

    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
        {
            s[i][j] = a[i][j] + max(max(s[i-1][j-1], s[i-1][j]), s[i-1][j+1]);
        }
    int pmin = 1;
    for(j = 2; j <= m; j++)
        if(s[n][j] > s[n][pmin]) pmin = j;

    fout << s[n][pmin];
    return 0;
}
