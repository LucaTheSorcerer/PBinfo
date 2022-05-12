#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    if(n==0)
    {
        a = 1;
    }
    while(n > 0)
    {
        a++;
        n /= 10;
    }
    cout << a;
    return 0;
}
    