#include <iostream>
#include <fstream>
using namespace std;

int nrvoc(char * s, char ch)
{
    int i = 0;
    int cnt = 0;
    while(s[i]!='\0')
    {
        if(s[i]==ch)
            cnt++;
        i++;
    }
    return cnt;
}

int main()
{
    char s[300];
    cin.getline(s, 300);
    int cnt = 0;
    char character = 'a';
    cnt+=nrvoc(s, character);
        character = 'e';
    cnt+=nrvoc(s, character);
        character = 'i';
    cnt+=nrvoc(s, character);
        character = 'o';
    cnt+=nrvoc(s, character);
        character = 'u';
    cnt+=nrvoc(s, character);
        character = 'A';
    cnt+=nrvoc(s, character);
        character = 'E';
    cnt+=nrvoc(s, character);
        character = 'I';
    cnt+=nrvoc(s, character);
        character = 'O';
    cnt+=nrvoc(s, character);
        character = 'U';
    cnt+=nrvoc(s, character);
    cout << cnt;
    return 0;
}