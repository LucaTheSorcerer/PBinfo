#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventauniforma.in");
ofstream fout("secventauniforma.out");
int a, b, lmax, l = 1, elem = - 1, i;

int main()
{
    fin >> b;
    while(fin >> a)
    {
        if(a == b) l++;
        else
        {
            if(l >= lmax)
            {
                lmax = l;
                elem = b;
            }
            l = 1;
        }
        b = a;
    }
    if(l >= lmax)
    {
        lmax = l;
        elem = b;
    }
    fout << lmax << endl;
    for(i = 1; i <= lmax; i++)
        fout << elem << ' ';
    return 0;

}