#include <bits/stdc++.h>
using namespace std;

ifstream fin("sum.in");
ofstream fout("sum.out");

int main()
{
    int a, b;
    fin >> a >> b;
    fout << a + b;
    fin.close();
    fout.close();
    return 0;
}