#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gengraf.in");
ofstream fout("gengraf.out");
int n, m, a[11][11], st[16], nr;

void Afisare()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            fout << a[i][j] << " ";
            fout << '\n';
    }
    fout << '\n';
}

void Formare()
{
    int ct = 0;
    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
        {
            ct++;
            a[i][j]=a[j][i]=st[ct];
        }
        Afisare();
}

void Back(int k)
{
    for(int i = 0; i <= 1; i++)
    {
        st[k]=i;
        if(k == m) Formare();
        else Back(k+1);
    }
}

int main()
{
    fin >> n;
    nr = 1;
    for(int i = 1; i <= (n*(n-1))/2; i++)
        nr *= 2;
    m = (n*(n-1))/2;
    fout << nr << '\n';
    Back(1);
    return 0;
}
