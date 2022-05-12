#include <fstream>
using namespace std;
ifstream fin("partitiinr.in");
ofstream fout("partitiinr.out");

int n, x[41];

void afisare(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << x[i] << " ";
    fout << '\n';
}

void Back(int k, int sp)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        x[k] = i;
        if(k == 1 || x[k] - x[k-1] >= 2)
        {
            sp += x[k];
            if(sp <= n)
                if(sp == n) afisare(k);
                else Back(k + 1, sp);
            sp -= x[k];
        }
    }
}

int main()
{
    fin >> n;
    Back(1, 0);
}