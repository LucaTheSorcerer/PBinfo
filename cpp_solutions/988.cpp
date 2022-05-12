#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prime.in");
ofstream fout("prime.out");

int prim(int n)
{
    int i, cnt = 0;
    for(i = 1; i * i <= n; i++)
    {
        if(n%i==0)
            cnt += 2;
         if(i * i == n)
            cnt--;
    }
    if(cnt == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n, a[1001];
    fin >> n;
    int i;
    for(i = 0; i < n; i++)
    {
        fin >> a[i];
        if(prim(a[i]))
            fout << a[i] << ' ';
    }
    fin.close();
    fout.close();
    return 0;
}