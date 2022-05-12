#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("sirpie.in");
ofstream fout("sirpie.out");

int n, x[10], p[10], a[10];

int cmmdc(int a, int b)
{
    int r, d;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    if(a == 1) return 1;
    else return 0;
}

void afisare()
{
    int ok = 0, i;
    for(i = 1; i < n; i++)
        if(!cmmdc(a[x[i]], a[x[i+1]])) ok = 1;
    if(ok == 0)
    {
        for(i = 1; i <= n; i++)
            fout << a[x[i]] << ' ';
        fout << endl;
    }
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        if(p[i]==0)
        {
            x[k] = i;
            p[i] = 1;
            if(k == n) afisare();
            else Back(k + 1);
            p[i] = 0;
        }
    }
}

int main()
{
    fin >> n;
    int i;
    for(i = 1; i <= n; i++)
        fin >> a[i];
    sort(a + 1, a + n + 1);
    Back(1);
    return 0;
}