#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("inaltime.in");
ofstream fout("inaltime.out");
vector <int> G[101];
int n, p, x, y, z, k, T[102], P[102], q, D[101], maxi;

void dfs(int x)
{
    P[x] = 1;
    for(auto i : G[x])
        if(!P[i])
        {
            D[i] = D[x] + 1;
            dfs(i);
        }
}

int main()
{
    fin >> n;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        fin >> T[i];
        if(T[i] != 0)
        {
            G[T[i]].push_back(i);
            G[i].push_back(T[i]);
        }
        if(T[i] == 0) p = i;
    }
    dfs(p);
    for(i = 1; i <= n; i++)
        maxi = max(maxi, D[i]);
    fout << maxi + 1;
}