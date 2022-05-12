#include <fstream>
using namespace std;
ifstream fin("shuffle.in");
ofstream fout("shuffle.out");

int n, s[10], p[10], c1[10], c2[10], a[10], count;

void afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        fout << s[i] << " ";
    fout << '\n';
    count++;
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        if(p[i] == 0 && s[k-1] != c1[i] && s[k-1] != c2[i])
        {
            p[i] = 1;
            s[k] = i;
            if(k==n) afisare();
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
    a[0] = -1;
    a[n+1] = -1;
    for(i = 1; i <= n; i++)
    {
        c1[a[i]] = a[i-1];
        c2[a[i]] = a[i+1];
    }
    Back(1);
    if(count == 0) fout << "nu exista";
    return 0;
}