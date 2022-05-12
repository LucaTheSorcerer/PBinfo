#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("paranteze.in");
ofstream fout("paranteze.out");
int n, x[25];

int check()
{
    int c0 = 0, c1 = 0;
    int i;
    for(i = 1; i <= n; i++)
    {
        if(c0 < c1) return 0;
        if(x[i]==0) c0++;
        else c1++;
    }
    if(c0 == c1) return 1;
    return 0;
}

void Afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        if(x[i]==0) fout << "(";
        else fout << ")";
    fout << '\n';
}

void Back(int k)
{
    int i;
    if(k == n + 1)
    {
        if(check()) Afisare();
        return ;
    }
    for(i = 0; i <= 1; i++)
    {
         x[k] = i;
         Back(k + 1);
    }
}

int main()
{
    fin >> n;
    Back(1);
}
