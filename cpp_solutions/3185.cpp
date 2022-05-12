#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    cin >> a >> b >> n;
    if(a <= n && b >= n)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}