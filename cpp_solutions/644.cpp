#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream fin("detdrum2.in");
ofstream fout("detdrum2.out");
vector <int> G[101];
int n, p, x, y, k, T[102], P[101], q, t[101];

void dfs(int x)
{
    P[x]= 1;
    for(auto i : G[x])
        if(!P[i])
        {
            dfs(i);
            t[i] = x;
        }
}

int main()
{
    fin >> n >> p >> q;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> T[i];
        if(T[i]!=0)
        {
            G[T[i]].push_back(i);
            G[i].push_back(T[i]);
        }
    }

    dfs(q);
    while(t[p] != 0)
    {
        fout << p << ' ';
        p = t[p];
    }
    fout << p;
}