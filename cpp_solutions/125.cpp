#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("permutari2.in");
ofstream fout("permutari2.out");

int n, x[10], a[10];

void Afis()
{
    int i;
    for(i = 1; i <= n; i++)
        fout << a[x[i]] << ' ';
    fout << '\n';
}

bool Solutie(int k)
{
    return k == n;
}

bool Ok(int k)
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k] == x[i])
            return false;
    return true;
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        x[k] = i;
        if(Ok(k))
            if(Solutie(k))
                Afis();
            else
                Back(k+1);
    }
}

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
        fin >> a[i];
    sort(a+1, a + n + 1);
    Back(1);
    return 0;
}