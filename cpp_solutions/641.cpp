#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream fin("subarbore.in");
ofstream fout("subarbore.out");
vector <int> G[101];
int n, p, x, y, k, T[102], R[102], P[102], c;

void dfs(int x)
{
    P[x]=1;
    R[++c] = x;
    for(auto i : G[x])
        if(!P[i]) dfs(i);

}

int main()
{
    fin >> n >> p;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> T[i];
        if(T[i] != 0)
            G[T[i]].push_back(i);
    }
    dfs(p);
    sort(R + 1, R + c + 1);
    for(i = 1; i <= c; i++)
        fout << R[i] << " ";
}