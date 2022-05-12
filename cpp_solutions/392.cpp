#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cladire.in");
ofstream fout("cladire.out");

int n, m, A[1001][1001], k, x, y;

int main()
{
    fin >> n >> m;
    fin >> k;
    for(int i = 1; i <= n; i++)
        A[i][1] = 1;
    for(int j = 1; j <= m; j++)
        A[1][j] = 1;
    for(int i = 2; i <= n; i++)
        for(int j = 2; j <= m; j++)
            A[i][j] = (A[i-1][j] + A[i][j-1]) % 9901;
    fout << A[n][m] % 9901;
    fout.close();
    return 0;
}