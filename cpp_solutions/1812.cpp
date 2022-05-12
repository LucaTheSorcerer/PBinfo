#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int n;
char st[26];

int valid(int k)
{
    if(st[1]!='a' || (k==n && st[n]!='a')) return 0;
    if(abs(st[k]-st[k-1])!=1 || st[k]==st[k+1]) return 0;
    return 1;
}

void afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        cout << st[i];
    cout << '\n';
}

void Back(int k)
{
    for(char i = 'a'; i <= st[k-1]+1; i++)
    {
        st[k] = i;
        if(valid(k))
            if(k==n) afis(k);
        else Back(k + 1);
    }
}

int main()
{
    cin >> n;
    st[1] = 'a';
    Back(2);
    return 0;
}