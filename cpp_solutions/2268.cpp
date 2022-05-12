#include <iostream>
#include <map>
using namespace std;
map <string, int> r;
int n;

int main()
{
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        r[s]++;
    }
    string smax;
    int fmax = 0;
    for(auto x:r)
    {
        if(x.second > fmax)
            fmax = x.second, smax = x.first;
    }
    cout << smax << " " << fmax;
}