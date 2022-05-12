#include <fstream>
using namespace std;
ifstream fin("ciclu.in");
ofstream fout("ciclu.out");

int st[101], n, s, a[101][101], i, x, y, sw, m, p;

int valid(int k)
{
    int i;
    if(k > 1)
        if(a[st[k]][st[k-1]]==0)
            return 0;
    for(i = 1; i < k; i++)
        if(st[k]==st[i])
            return 0;
    return 1;
}

void afisare(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << st[i] << " ";
    fout << st[1];
    fout << "\n";
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        st[k] = i;
        if(valid(k))
            if(k > 2 && a[st[k]][st[1]]==1)
            {
                if(sw==0)
                    afisare(k);
                sw = 1;
            }
            else Back(k + 1);
    }
}

int main()
{
    fin >> n >> m;
    for(i = 1; i <= m; i++)
    {
        fin >> x >> y;
        a[x][y] = a[y][x]= 1;
    }
    fin >> p;
    st[1] = p;
    Back(2);
    return 0;
}