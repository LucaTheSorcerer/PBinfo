#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("countsub.in");
ofstream fout("countsub.out");
int n, st[1001], dr[1001], v[1001], t[1001], k, x, c;

void RSD(int p)
{
    if(p > 0)
    {
        c++;
        RSD(st[p]);
        RSD(dr[p]);
    }
}

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> v[i] >> st[i] >> dr[i];
        t[st[i]] = i;
        t[dr[i]] = i;
    }
    fin >> k;
    for(i = 1; i <= k; i++)
    {
        fin >> x;
        c = 0;
        RSD(x);
        fout << c << '\n';
    }
}

