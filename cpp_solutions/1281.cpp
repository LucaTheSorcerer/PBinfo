#include <iostream>
using namespace std;
int n, a[11], p[11], ok, cnt;

void Afis()
{
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            if(a[j]==i) cout << "* ";
            else cout << "- ";
        cout << endl;
    }
    cnt++;
}

void Back(int ind)
{
    int i, j;
    for(i = 1; i <= n && cnt == 0; i++)
    {
        if(!p[i])
        {
            ok = 0;
            a[ind] = i;
            p[i] = 1;
            for(j = 1; j < ind; j++)
                if(ind - j == abs(a[ind] - a[j])) ok = 1;
            if(ind == n && ok == 0)
                Afis();
            else if(ok == 0) Back(ind + 1);
            p[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    Back(1);
    return 0;
}