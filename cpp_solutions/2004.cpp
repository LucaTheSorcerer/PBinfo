#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ore.in");
ofstream fout("ore.out");

int main()
{
    long long h1, h2, m1, m2, s1, s2, h, m ,s;
    fin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    fout << h1 << ": " << m1 << ": " << s1 << '\n';
    fout << h2 << ": " << m2 << ": " << s2 << '\n';
    long long hh1 = h1 * 3600 + m1 * 60 + s1;
    long long hh2 = h2 * 3600 + m2 * 60 + s2;
    fout << hh1 << '\n' << hh2 << '\n';
    long long y = hh1 + hh2;
    s = y % 60;
    m = ((y - 3) / 60) % 60;
    y = (y - 3) / 60;
    h = y / 60;
    fout << h << ": " << m << ": " << s;
    return 0;
}