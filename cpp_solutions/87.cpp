#include <cstring>
#include <fstream>
using namespace std;
ifstream fin("lgmax.in");
ofstream fout("lgmax.out");
int i, j, k, x, c, maxi, n;
char v[101][256], s[256], cuv[256];

int main()
{
    fin >> n;
    fin.get();
    for(i = 1; i <= n; i++)
    {
        fin.getline(s, 256);
        strcpy(v[i], s);
        if(strlen(s)>maxi)
        {
            maxi = strlen(s);
            x = i;
        }
    }
    fout << v[x];
    fout.close();
    return 0;
}