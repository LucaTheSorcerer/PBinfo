#include <iostream>
using namespace std;
//QUICK SORT

int tmp[1001];

void Quicksort(int a[], int st, int dr)
{
    if(st < dr)
    {
        int m = (st+dr)/2;
        int aux = a[st];
        a[st] = a[m];
        a[m] = aux;
        int i = st, j = dr, d = 0;
        while(i < j)
        {
            if(a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        Quicksort(a, st, i - 1);
        Quicksort(a, i + 1, dr);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    Quicksort(a, 1, n);
    
	for(int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
         
        