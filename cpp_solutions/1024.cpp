#include <iostream>
using namespace std;

int a[100001], n;

int pozitie(int ls, int ld)
{
    int aux;
    int i, j, i0, j0;
    i = ls;
    j = ld;
    i0 = 0;
    j0 = -1;
    while(i < j)
    {
        if(a[i]>a[j]) {swap(a[i],a[j]);
        aux = i0;
      	i0 = -j0;
        j0 = -aux;
    }i += i0;
    j +=  j0;
    } return i;
}

void divide(int ls, int ld)
{
    int p;
    if(ls < ld)
    {
        p = pozitie(ls, ld);
        divide(ls, p-1);
        divide(p+1, ld);
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    divide(1,n);
    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    return 0;
}