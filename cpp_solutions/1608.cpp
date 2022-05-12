#include <fstream>
using namespace std;
ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int div(int n)
{
    int i, cnt = 0;
    if(n == 0 || n == 1) return 0;
    for(i = 2; i * i <= n; i++)
        if(n%i==0) cnt++;
    return cnt;
}

int main()
{
    int n, a[1001], i = 0, j = 0;
    fin >> n;
    for(i = 1; i <= n; i++)
        fin >> a[i];

    for(i = 1; i <= n; i++)
        for(j = i + 1; j <= n; j++)
        {
            if(div(a[i]) > div(a[j]))
                swap(a[i], a[j]);
        }
    

    for(i = n; i >= 1; i--)
        fout << a[i] << ' ';
    return 0;
}