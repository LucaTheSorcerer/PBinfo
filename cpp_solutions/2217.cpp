#include <fstream>
#include <map>
using namespace std;
ifstream fin("map.in");
ofstream fout("map.out");
map < long long, int> r;
long long n, s;

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        fin >> s;
        r[s]++;
        fout << r[s] << " ";
    }
}