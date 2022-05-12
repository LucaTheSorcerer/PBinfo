#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");

int main()
{
    int n = 1, p1 = 1, p2 = 1, i;
    int a[100000], b[100000], c[100000];
    b[0] = -1, c[0] = -1;
    while(fin >> a[n])
        n++;
    for(i = 1; i < n; i++)
    {
        if(a[i]%2==0)
        {
            b[p1]=a[i];
            p1++;
        }
        if(a[i]%2==1)
        {
            c[p2] = a[i];
            p2++;
        }
    }
    sort(c+1, c+p2);
    for(i = 1; i < p2; i++)
    {
        if(c[i]!=c[i-1])
        fout << c[i] << ' ';
    }
    fout << endl;
    sort(b+1, b+p1);
    for(i = p1-1; i > 0; --i)
    {
        if(b[i-1]!=b[i])
        fout << b[i] << ' ';
    }
    fin.close();
    fout.close();
    return 0;
}