#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("preordine1.in");
ofstream fout("preordine1.out");

struct nod
{
    int info;
    nod *st, *dr;
};

void RSD(nod *p)
{
    if(p != NULL)
    {
        fout << p -> info << " ";
        RSD(p -> st);
        RSD(p -> dr);
    }
}

void Citire(nod * &p)
{
    int x;
    fin >> x;
    if(x==0) p = NULL;
    else
    {
        p = new nod;
        p -> info = x;
        Citire(p -> st);
        Citire(p -> dr);
    }
}

int main()
{
    nod *p = NULL;
    Citire(p);
    RSD(p -> st);
    return 0;
}
