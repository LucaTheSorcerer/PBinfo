#include <iostream>
#include <cstring>
using namespace std;
char s[201], t[101];
int i, sw;

int main()
{
    cin.get(s, 201);
    i = 0;
    while(i<strlen(s))
    {
        if(strchr("aeiou",s[i])!=0)
        {
            strcpy(t, s+i+1);
            s[i+1]='*';
            strcpy(s+i+2,t);
            sw = 1;
        }
        i++;
    }
    if(sw==1) cout << s;
    else cout << "FARA VOCALE";
    return 0;
}