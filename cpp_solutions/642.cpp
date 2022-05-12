#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("detdrum.in");
ofstream fout("detdrum.out");
int t[101], k, n;

int main()
{
    int i;
    fin >> n >> k;
    for(i = 1; i <= n; i++)
    {
        fin >> t[i];
    }
    while(k)
    {
        fout << k << ' ';
        k = t[k];
    }
}