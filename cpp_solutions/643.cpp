#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("detdrum1.in");
ofstream fout("detdrum1.out");
int t[101], n, k, r[101], c;

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
        r[++c] = k;
        k = t[k];
    }
    for(i = c; i >= 1; i--)
        fout << r[i] << " ";
}