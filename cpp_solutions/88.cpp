#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int main()
{
    int n;
    fin >> n;
    int i;
    for(i = 0; i < n; i++)
    {
        char ch[101];
        fin >> ch;
        int m = 0;
        while(ch[m]!='\0')
            m++;
        m--;
        int j = 0;
        bool check = true;
        while(ch[j]!='\0')
        {
            if(ch[j]!=ch[m-j])
                check = false;
            j++;
        }
        if(check)
            fout << 1 << '\n';
        else
            fout << 0 << '\n';
    }
    return 0;
}