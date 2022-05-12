#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector <int> G[100001];
int n, p, x, y, k, T[100002], P[100001];

void dfs(int x)
{
    P[x] = 1;
    for(auto i : G[x])
        if(!P[i]) dfs(i);
}

int main()
{
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> T[i];
        if(T[i] != 0)
        {
            G[T[i]].push_back(i);
            G[i].push_back(T[i]);
        }
        if(T[i] == 0) p = i;
    }
    dfs(p);
    int check = 0;
    for(i = 1; i <= n; i++)
        if(!P[i]) check++;
    if(check == 0 && p != 0) cout << "DA";
    else cout << "NU";
}