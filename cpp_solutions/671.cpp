#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("inordine.in");
ofstream fout("inordine.out");
int n, st[1001], dr[1001], v[1001], t[1001];

void RSD(int p)
{
    if(p > 0)
    {
        fout << v[p] << ' ';
        RSD(st[p]);
        RSD(dr[p]);
    }
}

void SRD(int p)
{
    if(p > 0)
    {
        SRD(st[p]);
        fout << v[p] << ' ';
        SRD(dr[p]);
    }
}

void SDR(int p)
{
    if(p > 0)
    {
        SDR(st[p]);
        SDR(dr[p]);
        fout << v[p] << ' ';
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
    int aux = 1, r;
    while(aux > 0)
    {
        if(r != 0) r = aux;
        aux = t[aux];
    }

    SRD(r);
}