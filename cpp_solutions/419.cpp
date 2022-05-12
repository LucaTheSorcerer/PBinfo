#include <fstream>
#include <climits>
using namespace std;
ifstream fin("subgraf1.in");
ofstream fout("subgraf1.out");
int a[101][101], n, m, k, i, j, minim = INT_MAX;

int main()
{
    fin >> n;
    while(fin >> i >> j)
        a[i][j]=a[j][i]=1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            a[i][0] = a[i][0] + a[i][j];
        if(a[i][0]<minim) minim = a[i][0];
    }

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(a[i][0]==minim)
                a[i][j] = a[j][i] = 0;

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            k += a[i][j];
    fout << k/2;
    fout.close();
    return 0;
}
