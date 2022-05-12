#include <iostream>
using namespace std;

int main()
{
    int tmp;
    int a = 0;
    while(tmp)
    {
        cin >> tmp;
        if(tmp > a)
            a = tmp;
    }
    if(a == 0)
        cout << "NU EXISTA";
    else
        cout << a;
    return 0;
}