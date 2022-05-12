#include <fstream>
using namespace std;
ifstream fin("partitiimultime.in");
ofstream fout("partitiimultime.out");
int x[10], n;

int maxim(int k)
{
    int maxi = 0, i;
    for(i = 1; i < k; i++)
        maxi = max(x[i], maxi);
    return maxi;
}

void afisare()
{
    int maxi = maxim(n+1);
    int i, j;
    for(i = 1; i <= maxi; i++)
    {
        for(j = 1; j <= n; j++)
            if(x[j]==i) fout << j;
        fout << "*";
    }
    fout << '\n';
}

void Back(int k)
{
    int i;
    for(i = 1; i <= maxim(k)+1; i++)
    {
        x[k] = i;
        if(k == n) afisare();
        else Back(k + 1);
    }
}

int main()
{
    fin >> n;
    x[1] = 1;
    Back(2);
    return 0;
}