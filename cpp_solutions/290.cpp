#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tmp;
    int count = 0;
    int par = -INT_MAX;
    for(int i = 0; i < n; ++i)
    {
        cin >> tmp;
        if(tmp%2==0)
        {
            if(par <= tmp)
            {
                par = tmp;
            }
            else
            {
                count = 1;
                break;
            }
        }
    }
    if(count==0)
        cout << "DA";
    else
        cout << "NU";
}