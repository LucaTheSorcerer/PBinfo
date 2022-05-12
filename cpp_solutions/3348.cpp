#include <iostream>
using namespace std;

int main()
{
    int A[101], c = 0, n;
    cin >> n;
    while(n)
    {
        A[++c] = n % 2;
        n /= 2;
    }

    int p = 1, i = 0;
    for(i = 1; i <=c; i++)
    {
        if(A[i] == 1)
            cout << p << ' ';
        p *= 2;
    }
    return 0;
}