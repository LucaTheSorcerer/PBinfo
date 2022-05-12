#include <fstream>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");


int main()
{
    int n, cnt = 0, i, maxim = 0, a[201];
    fin >> n;
    for(i = 0; i < n; i++)
    {
        fin >> a[i];
        if(a[i]%2==0 && a[i] > maxim)
            maxim = a[i];
    }
    for(i = 0; i < n; i++)
    {
        if(a[i]==maxim)
            cnt++;
    }
    if(cnt==0)
        fout << -1;
    else
        fout << maxim << ' ' << cnt;

    fin.close();
    fout.close();

    return 0;
}
