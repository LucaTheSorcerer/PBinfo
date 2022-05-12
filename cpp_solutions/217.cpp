#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i%2==0) cout << j << " ";
            else if(i % 2 == 1) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}