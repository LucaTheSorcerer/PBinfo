#include <fstream>
using namespace std;
ifstream fin("numere2.in");
ofstream fout("numere2.out");

int main()
{
    int n, a[25001], cnt = 0, i;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> a[i];
        if(a[i]==a[i-1]) cnt++, n -= 2, i -= 2;
    }
    fout << cnt << endl;
    for(i = 1; i <= n; i++) fout << a[i] << ' ';
    return 0;
}