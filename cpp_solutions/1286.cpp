#include <fstream>
using namespace std;
ifstream fin("submultimi1.in");
ofstream fout("submultimi1.out");

int n, x[10];

int dif(int k)
{
    int i;
    for(i = 2; i <= k; i++)
        if(x[i] - x[i-1] < 2) return 0;
    return 1;
}

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
    for(i = x[k-1]+1; i <= n; i++)
    {
        x[k] = i;
        if(dif(k)) Afis(k);
        Back(k+1);
    }
}

int main()
{
    fin >> n;
    Back(1);
    return 0;
}