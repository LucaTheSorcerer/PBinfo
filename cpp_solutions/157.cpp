#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("doarvocale.in");
ofstream fout("doarvocale.out");

int main()
{
    char ch[30];
    int n, i;
    fin >> n;
    int cnt = 0;
    for(i = 0; i < n; i++)
    {
        fin >> ch;
        int k  = 0;
        bool check = true;
        while(ch[k]!='\0')
        {
            if(ch[k]!='a' && ch[k]!='e' && ch[k]!='i' && ch[k]!='o' && ch[k]!='u')
                check = false;
            k++;
        }
        if(check)
            cnt++;
    }
    fout << cnt;
    return 0;
}
