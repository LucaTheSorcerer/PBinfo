#include <fstream>
using namespace std;
ifstream fin("submultimi.in");
ofstream fout("submultimi.out");

int n, x[10];

void Afisare(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << x[i] << " ";
    fout << '\n'; 
}


void Back(int k)
{
    int i;
    for(i = x[k-1] + 1; i <= n; i++)
    {
        x[k] = i;
        Afisare(k);
        Back(k+1);
    }
}

int main()
{
    fin >> n;
    Back(1);
    return 0;
}