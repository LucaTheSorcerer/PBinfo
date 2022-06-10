#include <fstream>
using namespace std;
ifstream fin("partitiinumar1.in");
ofstream fout("partitiinumar1.out");

int n, x[41];

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        fout << x[i] << " ";
    fout << '\n';
}

int Check(int k)
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k] == x[i]) return 0;
    return 1;
}

void Back(int k, int s)
{
    int i;
    for(i = x[k-1]; i <= n; i++)
    {
        x[k] = i;
        if(Check(k))
        {
            s += x[k];
            if(s <= n)
            {
                if(s == n) Afis(k);
                else Back(k + 1, s);
            }
            s -= x[k];
        }
    }
}

int main()
{
    fin >> n;
    x[0] = 1;
    Back(1, 0);
    return 0;
}