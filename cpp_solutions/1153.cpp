#include <iostream>
using namespace std;

int nrCifre(int n)
{
    int cif = 0;
    do
    {
        cif++, n /= 10;
    } while(n);
    return cif;
}

int toateNrCifrePare(int v[], int st, int dr)
{
    if(st == dr)
        if(nrCifre(v[st]) % 2 ==0)
            return 1;
        else return 0;

    else return toateNrCifrePare(v, st, (st+dr)/2) && toateNrCifrePare(v, (st+dr)/2+1, dr);
}

int main()
{
    int n, v[101], i;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> v[i];

    cout << (toateNrCifrePare(v, 1, n) ? "DA" : "NU");
}