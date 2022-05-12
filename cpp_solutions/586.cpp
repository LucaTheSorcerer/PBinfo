#include <iostream>
#include <vector>
using namespace std;

int n, m, x, y, check;
vector <int> G[101];

int main()
{
    cin >> n >> m;
    int i, j;
    for(i = 1; i <= m; i++)
    {
        cin >> x >> y;
        G[y].push_back(x);

    }
    for(i = 1; i <= n; i++)
    {
        int count = 0;
        for(int k : G[i]) count++;
        if(count==0) cout << i << " ", check++;
    }
    if(check==0) cout << "NU EXISTA";
}