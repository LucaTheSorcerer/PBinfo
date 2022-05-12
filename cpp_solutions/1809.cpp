#include <iostream>
using namespace std;

int a_la_b(int a, int b)
{
    if(b == 0)
        return 1;
    else
    {
        if(b % 2 == 0)
            return a_la_b(a, b/2) * a_la_b(a, b/2);
        else
            return a_la_b(a, b/2) * a_la_b(a, b/2) * a;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a_la_b(a,b);
    
    return 0;
}