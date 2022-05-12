#include "libraries.h"
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a >= b) cout << "Primul copil este mai mare cu " << abs(a-b) << " ani";
    else if(a <= b) cout << "Al doilea copil este mai mare cu " << abs(b-a) << " ani";
    else 
        if(a == b) cout << " Copiii au varste egale";
    return 0;
}