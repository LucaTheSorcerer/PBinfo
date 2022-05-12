#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
ifstream fin("nrfii.in");
ofstream fout("nrfii.out");

vector <int> G[101];
int n, x, k, T[101], maxi;

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> T[i];
        if(T[i] != 0)
            G[T[i]].push_back(i);
    }

    for(i = 1; i <= n; i++)
    {
        int cnt = 0;
        for(auto j : G[i]) cnt++;
        if(cnt > maxi) maxi = cnt;
    }

    for(i = 1; i <= n; i++)
    {
        int cnt = 0;
        for(auto j : G[i]) cnt++;
        if(cnt == maxi) fout << i << ' ';
    }
}