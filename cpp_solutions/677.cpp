#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nivelebin.in");
ofstream fout("nivelebin.out");
int n, st[1001], dr[1001], v[1001], t[1001], nivel[1001], maxim, c;

void RSD(int p)
{
    if(p > 0)
    {
        c++;
        nivel[p] = c;
        RSD(st[p]);
        RSD(dr[p]);
        c--;
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
    int r;
    for(i = 1; i <= n; i++)
        if(!t[i]) r = i;
    RSD(r);
    for(i = 1; i <= n; i++)
        if(nivel[i] > maxim) maxim = nivel[i];
    fout << maxim << '\n';
    for(i = 1; i <= maxim; i++)
    {
        int c = 0;
        int j;
        for(j = 1; j <= n; j++)
            if(nivel[j] == i) c++;
            fout << c << " ";
    }
}