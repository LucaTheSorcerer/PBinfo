#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("countprimsub.in");
ofstream fout("countprimsub.out");

int n, st[1001], dr[1001], v[1001], t[1001], x, k, c;

int prim(int n)
{
    int i;
    if(n < 2) return 0;
    else if(n==2) return 1;
    else if(n % 2 == 0) return 0;
    else for(i = 3; i * i <= n; i += 2)
        if(n%i==0) return 0;
    return 1;
}

void RSD(int p)
{
    if(p > 0)
    {
        if(prim(v[p])) c++;
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