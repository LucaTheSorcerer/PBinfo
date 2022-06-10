#include <fstream>
using namespace std;
ifstream fin("descp2.in");
ofstream fout("descp2.out");

int n, X[201], F[21], m;

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << F[X[i]] << " ";
    fout << "\n";
}

void Back(int k, int s)
{
    int i;
    for(i = X[k-1]; i <= m; i++)
    {
        X[k] = i;
        s += F[X[k]];
        if(s <= n)
        {
            if(s == n) Afis(k);
            else Back(k + 1, s);
        }
        s -= F[X[k]];
    }
}

int main()
{
    fin >> n;
    F[1] = 2;
    m = 1;
    while(2 * F[m] <= n)
    {
        m++;
        F[m] = 2 * F[m-1];
    }
    X[0] = 1;
    Back(1, 0);
    return 0;
}