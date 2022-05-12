#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("alice_xi.in");
ofstream fout("alice_xi.out");
long long int matr[36][36], n;

int main()
{
    fin >> n;
    for(int i = 1; i <= n; i++)
        matr[n][i] = 1;
    for(int i = n - 1; i >= 1; i--)
        for(int j = i; j >= 1; j--)
            matr[i][j] += matr[i+1][j] + matr[i+1][j+1] + matr[i+1][j-1];
    fout << matr[1][1];
    return 0;
}