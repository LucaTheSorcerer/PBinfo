#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");

int main()
{
    int n, v[2000002], i = 0, j = 0;
    fin >> n;
    v[0] = 0, v[n+1] = 0;

    for(i = 1; i <= n; i++)
        fin >> v[i];

    sort(v + 1, v + n + 1);

    for(i = n; i >= 1; i--)
        fout << v[i] << " ";
    fout << endl;

    for(i = n; i >= 1; i--)
    {
        if(v[i]*2 == v[i-1] + v[i+1])
            fout << 1 << ' ';
        else
            fout << 0 << ' ';
    }
    return 0;
}