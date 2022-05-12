#include <fstream>
using namespace std;
ifstream fin("halfsort.in");
ofstream fout("halfsort.out");

int main()
{
    int n, a[101], i, j;
    fin >> n;
    for(i = 1; i <= n; i++)
        fin >> a[i];
    
    for(i = 1; i < n/2; i++)
        for(j=i+1; j <= n/2; j++)
            if(a[i] > a[j])
                swap(a[i],a[j]);

    for(i = n/2+1; i < n; i++)
        for(j = i + 1; j <= n; j++)
            if(a[i] < a[j])
                swap(a[i],a[j]);

    for(i = 1; i <= n; i++)
        fout << a[i] << " ";
    return 0;
}