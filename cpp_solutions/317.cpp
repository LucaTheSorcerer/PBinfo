#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("summax.in");
ofstream fout("summax.out");
int x[11], p[11], a[11][11], n, smax, s;

void Back(int k)
{
    int i, j;
    for(i = 1; i <= n; i++)
        if(!p[i])
        {
            p[i] = 1;
            x[k] = i;
            if(k==n)
            {
                s = 0;
                for(j = 1; j <= n; j++)
                    s += a[j][x[j]];
                if(s > smax) smax = s;
            }
            else Back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    int i, j;
    fin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            fin >> a[i][j];
    Back(1);
    fout << smax;
    return 0;
}
