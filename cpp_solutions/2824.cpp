#include <fstream>
using namespace std;
ifstream fin("numere25.in");
ofstream fout("numere25.out");
int n, x, y, i, check;

int main()
{
    fin >> n;
    while(fin >> y)
    {
        for(i = x + 1; i < y; i++)
        {
            fout << i << " ";
            check = 1;
        }
        x = y;
    }
    for(i = x + 1; i <= n; i++)
    {
        fout << i << " ";
        check = 1;
    }
    if(!check) fout << "Nu exista";
}