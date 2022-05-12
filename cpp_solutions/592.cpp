#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("kruskal.in");
ofstream fout("kruskal.out");
int n, i, j, nm, costAPM, L[1001], m, ai, aj;

struct muchie
{
    int x, y;
    int cost, sel;
}v[5051];

int main()
{
    fin >> n >> m; 
    for(i = 1; i <= m; i++)
        fin >> v[i].x >> v[i].y >> v[i].cost;
    for(i = 1; i < m; i++)
        for(j = i + 1; j <= m; j++)
            if(v[i].cost > v[j].cost)
            {
                v[0] = v[i];
                v[i] = v[j];
                v[j] = v[0];
            }
    for(i = 1; i <= n; i++)
        L[i] = i;
    i = 0;
    while(nm!=n-1)
    {
        i++;
        if(L[v[i].x]!=L[v[i].y])
        {
            costAPM += v[i].cost;
            nm++;
            v[i].sel=1;
            ai=L[v[i].x];
            aj=L[v[i].y];
            for(j = 1; j <= n; j++)
                if(L[j]==aj)
                    L[j]=ai;
        }
    }
    fout << costAPM << "\n";
    for(i = 1; i <= m; i++)
        if(v[i].sel==1)
            fout << v[i].x << " " << v[i].y << "\n";
    return 0;
}