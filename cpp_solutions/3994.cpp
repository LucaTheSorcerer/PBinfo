#include <iostream>
using namespace std;
int n, s, v[41], cnt;

void Afis(int k)
{
    int i;
    for(i = 1; i <= k; i++)
        cout << v[i] << " ";
    cout << endl;
}

void Back(int k, int s)
{
    int i;
    for(i = v[k-1]; i <= n; i += 2)
    {
        v[k] = i;
        if(s + v[k] <= n)
        {
            if(s + v[k] == n) Afis(k), cnt++;
            else Back(k + 1, s + v[k]);
        }
    }
}

int main()
{
    cin >> n;
    v[0] = 2;
    Back(1, 0);
    if(cnt == 0)
        cout << "imposibil\n";
    return 0;
}