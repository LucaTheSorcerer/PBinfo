#include <iostream>
using namespace std;

void change(unsigned int n)
{
    if(n == 0) return;
    change(n/16);
    if(n%16 <= 9) cout << n%16;
    else
        switch(n%16)
        {
            case 10:
                cout << 'A';
                break;
            case 11:
                cout << 'B';
                break;
            case 12:
                cout << 'C';
                break;
            case 13:
                cout << 'D';
                break;
            case 14:
                cout << 'E';
                break;
            case 15:
                cout << 'F';
                break;
        }
}

int main()
{
    unsigned int n;
    cin >> n;
    change(n);
    return 0;
}