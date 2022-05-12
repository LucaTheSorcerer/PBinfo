#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("interclasm.in");
ofstream fout("interclasm.out");

int main()
{
    int x, n, m, a[100001], b[100001], v[200001], p = 0;
    fin >> x;
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> a[i];
        v[p] = a[i];
        p++;
    }

    fin >> m;
    for(int i = 1; i <= m; i++)
    {
        fin >> b[i];
        v[p] = b[i];
        p++;
    }
    sort(v, v+p);
    for(int i = 1; i <= p; i++)
    {
        if(v[i] != v[i-1] && v[i] != v[i+1])
        {
            if(v[i]%x==0)
                fout << v[i] << ' ';
        }
    }
}