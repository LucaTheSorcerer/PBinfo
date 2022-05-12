#include <fstream>
#include <climits>
using namespace std;
ifstream fin("matrice6.in");
ofstream fout("matrice6.out");

int main()
{
    int n, maxim = -INT_MAX, minim = INT_MAX, a[101][101];
    fin >> n;
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            fin >> a[i][j];
            if(a[i][j] > maxim) maxim = a[i][j];
            if(a[i][j] < minim) minim = a[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        int c = 0;
        for(j = 0; j < n; j++)
        {
            if(a[i][j]==maxim) c++;
        }
        if(c != 0) for(j = 0; j < n; j++)
            fout << a[i][j] + minim << " ";
        else for(j = 0; j < n; j++)
            fout << a[i][j] << " ";
            fout << endl;
    }
    return 0;
}