#include <fstream>
using namespace std;
ifstream fin("eliminare2.in");
ofstream fout("eliminare2.out");
int a[100001] , b[100001];
int main()
{
    int n , m , c = 0, i;
    fin >> n;
    for(int i = 0 ; i < n ; ++i)
        fin >> a[i];
    fin >> m;
    for(int j = 0 ; j < m ; ++j)
        fin >> b[j];
    for(int i = 0 ; i < n ; ++i)
        if(a[i]==b[c]) c++;
    if(c == m)fout << 1;
    else fout << 0;
    return 0;
}