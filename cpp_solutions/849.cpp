#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("paranteze2.in");
ofstream fout("paranteze2.out");

int main()
{
    char ch[300];
    fin >> ch;
    int v[300];
    int i = 0;
    int par = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='(')
            par++, v[i] = par;
        else
            v[i] = par, par--;
        i++;
    }
    int max = 0;
    int j;
    for(j = 0; j < i; j++)
    {
        if(v[j] > max)
            max = v[j];
    }
    fout << max;
    return 0;
}