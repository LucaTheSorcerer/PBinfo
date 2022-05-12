#include <fstream>
using namespace std;
ifstream fin("graf_complet.in");
ofstream fout("graf_complet.out");

int a[101][101], sw, i, j, k, n, m;

int main()
{
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> m;
        sw = 1;
        for(j = 1; j <= m; j++)
            for(k = 1; k <= m; k++)
            {
                 fin >> a[j][k];
                 if(a[j][k]!=1&&j!=k)
                    sw = 0;
            }
        if(sw==0) fout << "NU" << "\n";
        else fout << "DA" << "\n";
    }
    return 0;
}