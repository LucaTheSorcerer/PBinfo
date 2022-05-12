#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("maxim.in");
    fout.open("maxim.out");
    
    int x, y;
    fin >> x >> y;
    if(x < y)
        fout << y;
    else
        fout << x;
    
    fin.close();
    fout.close();
    return 0;
}