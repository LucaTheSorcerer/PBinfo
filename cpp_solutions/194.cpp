#include <iostream>
#include <fstream>
#include <algorithm>
#include <string.h>
using namespace std;
ifstream fin("anagrame1.in");
ofstream fout("anagrame1.out");
int n, x[10], p[10], a[10];
char s[10];

void Afisare()
{
    int i;
    for(i = 1; i <= n; i++)
        fout << s[x[i]];
    fout << "\n";
}

void Back(int k)
{
    int i;
    for(i = 0; i < n; i++)
        if(!p[i])
        {
            x[k] = i;
            p[i] = 1;
            if(k==n) Afisare();
            else Back(k + 1);
            p[i] = 0;
        }
}

int main()
{
    int i, j;
    fin >> s;
    n = strlen(s);
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(s[i] > s[j])
            {
                swap(s[i],s[j]);
            }
    Back(1);
    return 0;
}
