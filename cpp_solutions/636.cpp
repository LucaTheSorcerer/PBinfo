#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("arbore.in");
ofstream fout("arbore.out");
vector <int> G[101];
int n, p, i, x, y, T[101], P[101];

void dfs(int x)
{
    P[x] = 1;
    for(auto i : G[x])
        if(!P[i])
        {
            T[i] = x;
            dfs(i);
        }
}

int main()
{
    fin >> n >> p;
    for(i = 1; i < n; i++)
    {   
        fin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(p);
    for(i = 1; i <= n; i++)
        fout << T[i] << " ";
}