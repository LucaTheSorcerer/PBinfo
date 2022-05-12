#include <bits/stdc++.h>
using namespace std;
ifstream fin("paranteze1.in");
ofstream fout("paranteze1.out");

int main()
{
    int n, k = 0;
    char sir[300];
    int ok = 0;
    fin >> n;
    int i;
    for(i = 0; i < n; i++)
    {
        fin >> sir;
        k = 0;
        ok = 1;
        int j;
        for(j = 0; j < strlen(sir) && ok; j++)
            if(sir[j]=='(')
               k++;
            else if(sir[j]==')' && k == 0)
                ok = 0;
            else k--;
        if(ok && k == 0)
            fout << 1 << '\n';
        else
            fout << 0 << '\n';
    }

    return 0;
}
