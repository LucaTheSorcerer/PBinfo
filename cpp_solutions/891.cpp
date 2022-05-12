#include <iostream>
using namespace std;

char ch[256];
int i = 0;

int main()
{
    cin.getline(ch, 256);
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            cout << ch[i] << 'p' << ch[i];
        else
            cout << ch[i];
        i++;
    }
    return 0;
}