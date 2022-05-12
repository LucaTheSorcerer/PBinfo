#include <fstream>
using namespace std;
ifstream fin("siruri.in");
ofstream fout("siruri.out");

int x[10], n, m, p;

void Afis()
{
    int i, ok = 0;
    for(i = 2; i <= m; i++)
        if(x[i] - x[i-1] > 2) ok = 1;
    if(ok == 0)
    {
        for(i = 1; i <= m; i++)
            fout << x[i] << ' ';
        fout << '\n';
    } 
}

void Back(int k)
{
    int i;
    for(i = x[k-1]+1; i <= n; i++)
    {
        x[k] = i;
        if(k == m) Afis();
        else Back(k + 1);
    }
}

int main()
{
    fin >> n >> m;
    Back(1);
    return 0;
}