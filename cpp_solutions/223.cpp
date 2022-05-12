#include <fstream>
using namespace std;
ifstream fin("mincols1.in");
ofstream fout("mincols1.out");

int main()
{
    long long n, a[30][30], p = 1, minim;
    fin >> n;
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)  fin >> a[i][j];
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i + j == n - 1)
            {
                minim = a[i][j];
                int cnt = 0;
                int k;
                for(k = 0; k < n; k++)
                {
                    if(a[k][j] >= minim) cnt++;
                }
                if(cnt == n)
                p *= minim;
                p %= 10;
            }
        }
    }
    fout << p%10;
}