#include <iostream>
using namespace std;

int main()
{
    char sir[21];
    cin >> sir;
    int i = 0;
    while(sir[i]!='\0')
    {
        if(sir[i]=='a')
            cout << 'A';
        else if(sir[i]=='e')
            cout << 'E';
        else if(sir[i]=='i')
            cout << 'I';
        else if(sir[i]=='o')
            cout << 'O';
        else if(sir[i]=='u')
            cout << 'U';
        else
            cout << sir[i];
        i++;
    }
    return 0;
}