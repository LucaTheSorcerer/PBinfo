#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("masini.in");
ofstream fout("masini.out");
int n, a[1001], T, s, c;

int main()
{
    fin >> n >> T;
    int i;
    for(i = 1; i <= n; i++)
        fin >> a[i];
    sort(a+1, a + n + 1);

    for(i = 1; i <= n; i++)
        if(a[i] + s <= T) s += a[i], c++;
    fout << c;
}