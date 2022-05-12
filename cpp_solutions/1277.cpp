#include <fstream>
using namespace std;
ifstream fin("produscartezian1.in");
ofstream fout("produscartezian1.out");

int n, m, x[10];

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++) 
        fout << x[i] << " ";
    fout << '\n';
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        x[k] = i;
        if(k == m)
            Afis(k);
        else
            Back(k+1);
    }
}

int main()
{
    fin >> n >> m;
    Back(1);
}