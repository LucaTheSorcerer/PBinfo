#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("plopi2.in");
ofstream fout("plopi2.out");
int n, cnt, rez, mini, x;

int main()
{
    fin >> n >> mini;
    n--;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> x;
        if(x > mini) cnt++, rez += x - mini;
        else if(x < mini) mini = x;
    }
    fout << cnt << " " << rez;
}