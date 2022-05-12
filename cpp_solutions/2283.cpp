#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("caraghios.in");
ofstream fout("caraghios.out");

int main()
{
    long long cnt = 0;
    char x, y;
    fin >> x;
    if(x=='1') cnt++;
    y = x;
    while(fin >> x)
    {
        if(x=='1') cnt++;
        if(y=='8' && x=='1') cnt++;
        y=x;
    }
    fout << cnt;
    return 0;
}