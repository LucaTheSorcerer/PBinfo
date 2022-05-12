#include <fstream>
using namespace std;
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int n, m, i, a[100001], b[100001], c[200001], p;

int main()
{
    fin >> n;
    for(i = 1; i <= n; i++)
        fin >> a[i];
    fin >> m;
    for(i = 1; i <= m; i++)
        fin >> b[i];

    int i = 1, j = 1;
    while(i <= n && j <= m)
        if(a[i] < b[j])
            c[++p] = a[i++];
        else
            c[++p] = b[j++];

    while(i <= n)
        c[++p] = a[i++];

    while(j <= m)
        c[++p] = b[j++];

    for(i = 1; i <= p; i++)
    {
        fout << c[i] << " ";
        if(i%10==0)
            fout << endl;
    }

    return 0;
}
