#include <fstream>
using namespace std;
ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");

int main()
{
    int f[1000001] = {0};
    int a, b, check = 0, n, i;
    fin >> n;
    int x;
    while(fin >> x)
    {
        if(x < 1000)
            f[x]++;
    }

    for(i = 999; i >= 100; i--)
    {
        if(f[i] == 0 && check < 2)
        {
            if(check == 0)
                a = i;
            if(check == 1)
                b = i;
            check++;
        }
    }

    if(check == 2)
        fout << a << ' ' << b;
    if(check == 0)
        fout << "NU";
    return 0;

}