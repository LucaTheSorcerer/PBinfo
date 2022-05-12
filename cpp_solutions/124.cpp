#include <fstream>
using namespace std;
ifstream fin("permutari1.in");
ofstream fout("permutari1.out");

int x[10], n;

void Afis()
{
    int i;
    for(i = 1; i <= n; i++)
        fout << x[i] << " ";
    fout << '\n';
}

bool OK(int k)
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k]==x[i]) return false;
    return true;
}

bool Solutie(int k)
{
    return k == n;
}

void Back(int k)
{
    int i;
    for(i = n; i >= 1; i--)
    {
        x[k] = i;
        if(OK(k))
            if(Solutie(k))
                Afis();
            else Back(k+1);
    }
}

int main()
{
    fin >> n;
    Back(1);
    return 0;
}