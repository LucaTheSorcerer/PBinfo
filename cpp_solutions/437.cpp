#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("conex.in");
ofstream fout("conex.out");
int n, m, vp, i, j, a[101][101], viz[101], c[101], p, u, q, sw;

int main()
{
    fin >> n;
    while(fin >> i >> j)
        a[i][j]=a[j][i]=1;
    vp = 1;
    viz[vp] = 1;
    c[1] = vp;
    u=p=1;
    while(p<=u && sw == 0)
    {
        for(i = 1; i <= n; i++)
            if(a[c[p]][i] && viz[i] == 0)
            {
                viz[i] = 1;
                u++;
                if(u==n) sw = 1;
                c[u] = i;
            }
            p++;
    }
    if(sw==0) fout << "NU";
    else fout << "DA";
    fout.close();
    return 0;

}


