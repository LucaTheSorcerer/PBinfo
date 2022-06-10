#include <fstream>
using namespace std;
ifstream fin("partitiinumar.in");
ofstream fout("partitiinumar.out");

int n, v[41], s;

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << v[i] << " ";
    fout << '\n';
}

void Back(int k, int s)
{
    int i;
    for(i = v[k-1]; i  <= n; i++)
    {
        v[k] = i;
        s += v[k];
        if(s <= n)
        {
            if(s == n) Afis(k);
            else Back(k+1, s);
        }
        s -= v[k];
    }
}

int main()
{
    fin >> n;
    v[0] = 1;
    Back(1, 0);
    return 0;
}