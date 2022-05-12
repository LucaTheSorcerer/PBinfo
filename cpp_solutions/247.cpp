#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");

int main()
{
    int a[100001], v[100001], n = 0, p = 0, cnt = 0, i = 0, j = 0;
    while(fin >> v[n]) n++;
    for(i = 0; i < n; i++)
    {
        if(v[i] == 0)
        {
            a[p] = 0;
            p++;
        }

        while(v[i])
        {
            a[p] = v[i] % 10;
            p++;
            v[i] /= 10;
        }
    }
    sort(a, a + p);
    for(i = p - 1; i >= 0; i--)
    {
        fout << a[i] << ' ';
        cnt++;
        if(cnt == 20)
        {
            fout << endl;
            cnt == 0;
        }
    }
    return 0;
}