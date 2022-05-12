#include <bits/stdc++.h>
using namespace std;
ifstream fin("interclasare2.in");
ofstream fout("interclasare2.out");
int n, m, k = 0, i, j, a[100001], b[100001], c[100001];

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
        if(a[i]==b[j])
            c[++k] = a[i], i++, j++;
        else
            if(a[i] < b[j])
                i++;
            else
                j++;

    for(i = 1; i <= k; i++)
    {
        fout << c[i] << ' ';
        if(i % 10==0)
            fout << '\n';
    }

    return 0;
}
