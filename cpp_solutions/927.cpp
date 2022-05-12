#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("distantapuncte.in");
ofstream fout("distantapuncte.out");

struct dist
{
    int x, y;
};

void citire(dist &a)
{
    fin >> a.x >> a.y;
}

int main()
{
    dist a, b;
    citire(a);
    citire(b);
    double rezultat = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
    fout << rezultat;
}