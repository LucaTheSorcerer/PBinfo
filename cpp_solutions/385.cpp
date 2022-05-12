#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sumtri.in");
ofstream fout("sumtri.out");
int n, a[101][101], maxi;

int main()
{
    fin >> n;
    int i, j;
    for(i= 1; i <= n; i++)
        for(j = 1; j <= i; j++)
            fin >> a[i][j];
    for(i = n - 1; i >= 1; i--)
        for(j = n; j >= 1; j--)
        {
            if(a[i][j] + a[i+1][j] >= a[i][j]+a[i+1][j+1])
                maxi = a[i][j] + a[i+1][j];
            else
                maxi = a[i][j] + a[i+1][j+1];
            a[i][j] = maxi;
        }
        fout << a[1][1];
        return 0;
}