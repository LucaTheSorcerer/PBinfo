#include <fstream>
using namespace std;
ifstream fin("partitiinumar1.in");
ofstream fout("partitiinumar1.out");
int n, st[41], s;

void tip(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << st[i] << " ";
    fout << "\n";
}

int valid(int k)
{
    int i;
    s = 0;
    for(i = 1; i <= k; i++)
        s += st[i];
    if(s > n) return 0 ;
    return 1;
}

void backtr(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        st[k] = i;
        if(st[k] > st[k-1])
            if(valid(k))
                if(s == n) tip(k);
                else backtr(k+1);
    }
}

int main()
{
    fin >> n;
    backtr(1);
    fout.close();
    return 0;
}