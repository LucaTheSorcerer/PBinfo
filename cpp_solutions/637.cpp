#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("frunze.in");
ofstream fout("frunze.out");
vector <int> G[101];
int n, i, x, y, k, r[101], p, c;

int main()
{
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(x != 0) G[x].push_back(i);
        if(x == 0) p = i;
    }
    fout << p << '\n';
    for(i = 1; i <= n; i++)
    {
        int check = 0;
        for(auto j : G[i])
            check++;
        if(check == 0)
            c++, r[c] = i;
    }
    fout << c << '\n';
    for(i = 1; i <= c; i++)
        fout << r[i] << ' ';
}