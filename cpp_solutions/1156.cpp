#include <iostream>
using namespace std;

long int v[1001][2], n;

void Sort(long int s, long int d)
{
    long long pivot = v[(s+d)/2][1], i = s, j = d;
    while(i <= j)
    {
        while(v[i][1] < pivot) i++;
        while(v[j][1] > pivot) j--;
        if(i <= j)
        {
            swap(v[i][1], v[j][1]);
            swap(v[i][0], v[j][0]);
            i++, j--;
        }
    }
    if(s < j) Sort(s, j);
    if(d > i) Sort(i, d);
}

int main()
{
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        cin >> v[i][1];
        v[i][0] = i;
    }
    Sort(1, n);
    for(i = 1; i <= n; i++)
    {
        cout << v[i][0] << " ";
    }
}