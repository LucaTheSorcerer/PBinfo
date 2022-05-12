#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("inordine1.in");
ofstream fout("inordine1.out");

struct nod
{
    int info;
    nod *st, *dr;
};

void SRD(nod *p)
{
    if(p)
    {
        SRD(p -> st);
        fout << p -> info << " ";
        SRD(p -> dr);
    }
}

void Read(nod * &p)
{
    int x;
    fin >> x;
    if(x==0) p = NULL;
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
    SRD(p);
    return 0;
}