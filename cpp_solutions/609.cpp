#include <iostream>
using namespace std;

int main()
{
    char ch[101];
    cin.getline(ch, 101);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            cout << ch[i] << ch[i];
        else
            cout << ch[i];
        i++;
    }
    return 0;
}