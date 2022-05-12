#include <fstream>
using namespace std;
ifstream fin("submdiv.in");
ofstream fout("submdiv.out");

int n, m, x[20], a[20], p, cnt;

void Afis()
{
    int i;
    for(i = 1; i <= m; i++)
        fout << a[x[i]] << ' ';
    fout << '\n';
    cnt++;
}

void Back(int k)
{
    int i;
    for(i = x[k-1]+1; i <= p; i++)
    {
        x[k] = i;
        if(k == m)
            Afis();
        else
            Back(k+1);
    }
}


int main()
{
    fin >> n >> m;
    int i;
    for(i = 1; i <= n; i++)
        if(n%i==0) a[++p] = i;
    Back(1);
    if(cnt == 0) fout << "fara solutie";
    return 0;
}
