#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("postordine1.in");
ofstream fout("postordine1.out");

struct nod
{
    int info;
    nod *st, *dr;
};

void SDR(nod *p)
{
    if(p)
    {
        SDR(p -> st);
        SDR(p -> dr);
        fout << p -> info << " ";
    }
}

void Read(nod * &p)
{
    int x;
    fin >> x;
    if(x == 0) p = NULL;
    else
    {
        p = new nod;
        p -> info = x;
        Read(p -> st);
        Read(p -> dr);
    }
}

int main()
{
    nod *p = NULL;
    Read(p);
    SDR(p);
    return 0;
}