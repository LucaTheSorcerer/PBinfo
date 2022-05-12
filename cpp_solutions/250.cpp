#include <fstream>
using namespace std;
ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

int a[100005],n, b[100005], m, c[200005], i, j, k;

int main()
{
    fin >> n;
    for(i=1;i<=n;i++) fin >> a[i];
    fin >> m;
    for(i=1;i<=m;i++) fin >> b[i];
    i=1;j=1;
    k = 0;
    while(i<=n && j<=m)
        if(a[i]<b[j])
            c[++k] = a[i++];
        else
            if(a[i]>b[j])
                c[++k] = b[j++];
            else
                i++;
    if(i<=n)
        while(i<=n)
            c[++k] = a[i++];
    else
        while(j<=m)
            c[++k] = b[j++];
    for(i=1;i<=k;i++)
    {
        fout << c[i] << " ";
        if(i%10==0)
            fout << "\n";
    }
    fout.close();
    return 0;
}