#include <iostream>
using namespace std;

int n, i ,v[1001];

int nr(int n)
{
    int k = 0;
    while(n!=0)
        k++, n/=10;
    return k;
}

int subp(int ls, int ld)
{
    int mij, ss, sd;
    if(ls==ld)
        if(nr(v[ls])%2==0) return 1;
        else return 0;
    else
    {
        mij = (ls+ld)/2;
        ss = subp(ls, mij);
        sd = subp(mij+1, ld);
    }
    return ss+sd;
}

int main()
{
    cin >> n;
    for(i = 1; i <= n; i++) cin >> v[i];
    if(subp(1,n)==n)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
