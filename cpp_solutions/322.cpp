#include <fstream>
using namespace std;
ifstream fin("partitiinumar2.in");
ofstream fout("partitiinumar2.out");
int n, x[80], m;

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
        if(k == 1 || x[k] > x[k-1])
        {
            sp += x[k];
            if(sp <= n)
                if(sp == n && k >= m) afisare(k);
                else Back(k + 1, sp);
            sp -= x[k];
        }
    }
}

int main()
{
    fin >> n >> m;
    Back(1, 0);
}