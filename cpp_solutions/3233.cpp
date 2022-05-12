#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    for(i = n - ((n+1) % 2); i >= 1; i -= 2)
        cout << i << ' ';
    return 0;
}