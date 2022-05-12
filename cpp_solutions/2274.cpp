#include <bits/stdc++.h>
using namespace std;

ifstream fin("limite.in");
ofstream fout("limite.out");

int main()
{
    int  n;
    unsigned long long a;
    fin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        fin >> a;
        if(a <= 127) fout << "char" << endl;
        else if(a <= 255) fout << "unsigned char" << endl;
        else if(a <= 32767) fout << "short" << endl;
        else if(a <= 65535) fout << "unsigned short" << endl;
        else if(a <= 2147483647)fout << "int" << endl;
        else if(a <= 4294967295) fout << "unsigned int" << endl;
        else if(a <= 9223372036854775807) fout << "long long" << endl;
        else if(a <= 18446744073709551615) fout << "unsigned long long" << endl;
    }
    return 0;
}