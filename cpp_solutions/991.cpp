#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice5.in");
ofstream fout("matrice5.out");

int sub(int n, int a[][101], int k)
{
    int sum = 0;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i + j == k)
                sum += a[i][j];
    return sum;
}

int main()
{
    int n, a[101][101];
    fin >> n;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            fin >> a[i][j];
    int sum = 0;
    for(i = 2; i <= n; i++)
        sum += sub(n, a, i);
    fout << sum;
    return 0;
}