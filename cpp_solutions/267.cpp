#include <fstream>
using namespace std;
ifstream fin("unice.in");
ofstream fout("unice.out");

int n,x,a[100];

int main()
{
    fin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> x;
        a[x]++;
    }
    for(int i = 0; i <= 99; ++i)
        if(a[i]==1)
        fout << i << " ";
    fout.close();
    return 0;
}
            