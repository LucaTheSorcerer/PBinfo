#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("grupuri.in");
ofstream fout("grupuri.out");
int n, i, j, A[101][101], nr;
int di[] = {-1, 0, 1, 0}, dj[] = {0, 1, 0, -1};

int interior(int i, int j)
{
    if(i >= 1 && i <= n && j >= 1 && j <= n)
        return 1;
    return 0;
}

void fill(int i, int j)
{
    int k, in, jn;
    A[i][j] = 0;
    for(k = 0; k < 4; k++)
    {
        in = i + di[k];
        jn = j + dj[k];
        if(interior(in, jn) && A[in][jn] == 1)
            fill(in, jn);
    }
}

int main()
{
    fin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            fin >> A[i][j];

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(A[i][j] == 1)
            {
                nr++;
                fill(i, j);
            }
    
    fout << nr;
    return 0;
}