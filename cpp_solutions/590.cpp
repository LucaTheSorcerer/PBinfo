#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("2prim.in");
ofstream fout("2prim.out");

int prim(int n)
{
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(n%2==0) return 0;
    int i;
    for(i = 3; i * i <= n; i += 2)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n, cnt = 0, x;
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(prim(x%100)) cnt++;
    }
    fout << cnt;
    fin.close();
    fout.close();
    return 0;
}