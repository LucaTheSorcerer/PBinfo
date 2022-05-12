#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("bifrunze.in");
ofstream fout("bifrunze.out");
int n, m, st, dr;

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> m >> st >> dr;
        if(st == 0 && dr == 0) fout << i << " ";
    }
}