#include <bits/stdc++.h>
using namespace std;
int n, v[1005];

int Cmmdc2(int a, int b);
int Cmmdc(int st, int dr);

int main()
{
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
        cin >> v[i];
    cout << Cmmdc(1, n);
    return 0;
}

int Cmmdc2(int a, int b)
{
    if(b==0)
        return a;
    else
        return Cmmdc2(b, a%b);
}

int Cmmdc(int st, int dr)
{
    if(st==dr)
        return v[st];
    else
    {
        int mij = (st+dr)/2;
        int x = Cmmdc(st, mij);
        int y = Cmmdc(mij+1, dr);
        return Cmmdc2(x, y);
    }
}
