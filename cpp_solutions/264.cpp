#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxcif.in");
ofstream fout("maxcif.out");

int main()
{
    int f[10]={0};
    int maxi = 0;
    int cnt;
    while(fin >> cnt)
    {
        f[cnt]++;
        if(f[cnt]>maxi)
        maxi = f[cnt];
    }
    int i;
    for(i = 0; i <= 9; i++)
    {
        if(f[i]==maxi)
        fout << i << ' ';
    }
    return 0;
}