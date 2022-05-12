#include <fstream>
using namespace std;
ifstream fin("pozmax.in");
ofstream fout("pozmax.out");


int main()
{
    int n, u = 0, p = 0, maxim = 0;
    float aux;
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        fin >> aux;
        if(aux > maxim)
        {
            p = i;
            maxim = aux;
        }
        if(aux==maxim)
            u = i;
    }
    fout << p << ' ' << u;
    fin.close();
    fout.close();
    return 0;
}