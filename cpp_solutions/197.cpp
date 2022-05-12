#include <fstream>
using namespace std;
ifstream fin("combinari.in");
ofstream fout("combinari.out");

int n, x[10], p;

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i ++)
        fout << x[i] << " ";
    fout << '\n';
}


bool OK(int k)
{
    int i;
    for(i = 1; i < k; i++)
        if(x[k] == x[i])
            return false;
    if(k > 1)
        if(x[k] <= x[k-1])
            return false;
    return true;
}

bool Solution(int k)
{
    return k == p;
}

void Back(int k)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        x[k] = i;
        if(OK(k))
            if(Solution(k))
                Afis(k);
            else
                Back(k+1);
    }
}

int main()
{
    fin >> n >> p;
    Back(1);
    return 0;
}