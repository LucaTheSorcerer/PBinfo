#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[101];
    for(i = 1; i <= n; ++i)
        cin >> a[i];
    int ca = a[1];
    int ogl = 0;
    while(ca){
        ogl = ogl * 10 + ca % 10;
        ca /= 10;
    }
    bool ok = false;
    for(i = 2; i <= n; ++i)
        if(ogl == a[i])
            ok = true;
    if(ok)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
