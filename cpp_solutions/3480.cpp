#include <fstream>
using namespace std;
ifstream fin("9lan.in");
ofstream fout("9lan.out");

int n, uc;

int main()
{
    fin >> n;
    if(n%2==0)
        uc = 1;
    else
        uc = 9;
    fout << uc;
    fout.close();
    return 0;
}