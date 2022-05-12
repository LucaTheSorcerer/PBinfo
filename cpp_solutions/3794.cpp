#include <fstream>
using namespace std;
ifstream fin("file.in");
ofstream fout("file.out");

int n, m, a[100001], b[100001], c[200001], k, i;

int main()
{
    fin >> n >> m;
    for(int i = 1; i <= n; i++)
        fin >> a[i];
    for(int i = 1; i <= m; i++)
        fin >> b[i];

    int i = 1, j = 1;
    while(i <= n && j <= m)
        if(a[i] < b[j])
            c[++k] = a[i++];
        else
            c[++k] = b[j++];
    
    while(i <= n)
        c[++k] = a[i++];
    
    while(j <= m)
        c[++k] = b[j++];

    for(int i = 1; i <= k; i++)
        fout << c[i] << " ";
    return 0;
}