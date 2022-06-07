#include <iostream>
using namespace std;

int aux[200002];
void MergeSort(int v[], int n, int st, int dr)
{
    if(st < dr)
    {
        int m = (st+dr)/2;
        MergeSort(v, n, st, m);
        MergeSort(v, n, m + 1, dr);
        int i = st, j = m + 1, k = 0;
        while (i <= m && j <= dr)
            if(v[i] < v[j]) aux[++k] = v[i++];
            else aux[++k] = v[j++];

        while(i <= m) aux[++k] = v[i++];
        while(j <= dr) aux[++k] = v[j++];

        for(i = st, j = 1; i<= dr; i++, j++)
            v[i] = aux[j];
    }
}

int main()
{
    int n, v[200001], k, i = 0;
    cin >> n >> k;
    for(i = 1; i <= n; i++)
        cin >> v[i];

    MergeSort(v, n, 1, k);
    MergeSort(v, n, k+1, n);

    for(i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}