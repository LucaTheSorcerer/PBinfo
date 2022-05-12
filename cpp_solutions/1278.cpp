#include <fstream>
using namespace std;
ifstream fin("produscartezian2.in");
ofstream fout("produscartezian2.out");

int n, m, x[10], a[11];

void Afis()
{
    int i;
    for(i = 1;  i <= n; i++)
        fout << x[i] << " ";
    fout << '\n';
}

void Back(int k)
{
    int i;
    if(k > n)
    {
        Afis();
        return;
    }

    else
    {
        for(i = 1; i <= a[k]; i++)
        {
            x[k] = i;
            Back(k+1);
        }
    }
}

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
        fin >> a[i];
    Back(1);

}