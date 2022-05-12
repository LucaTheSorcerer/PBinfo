#include <fstream>
using namespace std;
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");

int n, a[10];

int main()
{
    while(fin >> n)
        a[n]++;
    if(a[7]!=0)
    fout << 7 << " " << a[7];
    else
        if(a[5]!=0)
        fout << 5 << " " << a[5];
    else
        if(a[3]!=0)
        fout << 3 << " " << a[3];
    else
        if(a[2]!=0)
        fout << 2 << " " << a[2];
    fout.close();
    return 0;
}
        