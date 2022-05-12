#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("afisarefii.in");
ofstream fout("afisarefii.out");
vector <int> G[101];
int n, x, k, y, j, T[101];

int main()
{
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> T[i];
        if(T[i] != 0)
            G[T[i]].push_back(i);
    }
    fin >> k;
    for(int i = 1; i <= k; i++)
    {
        int r[101] = {0}, c = 0;
        fin >> x;
        for(auto i : G[x])
            c++, r[c] = i;
        fout << c << " ";
        for(int i = 1; i <= c; i++)
            fout << r[i] << " ";
        fout << '\n';
    }
}