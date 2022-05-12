#include <fstream>
using namespace std;
ifstream fin("permutari1.in");
ofstream fout("permutari1.out");

int n, x[10], uz[10];

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << x[i] << ' ';
    fout << '\n';
}

void Back(int k)
{
    int i;
    for(i = n; i >= 1; i--)
        if(uz[i]==0)
        {
            x[k] = i;
            uz[i] = 1;
            if(k == n)
                Afis(k);
            else
                Back(k + 1);
            uz[i] = 0;
        }
}

int main()
{
    fin >> n;
    Back(1);
    return 0;
}