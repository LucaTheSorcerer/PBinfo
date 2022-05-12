#include <bits/stdc++.h>
using namespace std;
ifstream fin("hercule.in");
ofstream fout("hercule.out");
int n, m, a[101][101], t[101][101], k;
int dl[] = {1,0,0,-1};
int dc[] = {0,1,-1,0};

void Back(int l, int c, int pas)
{
    int i, li, ci;
    for(i = 0; i < 4; i++)
    {
        li = l + dl[i];
        ci = c + dc[i];
        if(li >= 1 && li <= n && ci >= 1 && ci <= m)
        if(t[li][ci]==0 && a[li][ci]-pas >= 0)
        {
            t[li][ci] = pas;
            if(li==n && ci==m) k++;
            else
                Back(li, ci, pas+1);
            t[li][ci] = 0;
        }
    }
}

int main()
{
    fin >> n >> m;
    int i, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= m; j++)
            fin >> a[i][j];
    t[1][1] = 1;
    Back(1, 1, 2);
    fout << k;
    fout.close();
    return 0;
}
