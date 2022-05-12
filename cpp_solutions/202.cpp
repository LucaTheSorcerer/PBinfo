#include <bits/stdc++.h>
using namespace std;
ifstream fin("permpf.in");
ofstream fout("permpf.out");
int n, x[10], p[10], a[10];

void Afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        fout << x[i] << ' ';
    fout << '\n';
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
        if(!p[i] && k != i)
        {
            x[k] = i;
            p[i] = 1;
            if(k == n) Afisare();
            else Back(k + 1);
            p[i] = 0;
        }
}


int main()
{
    fin >> n;
    Back(1);
    return 0;
}
