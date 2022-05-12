#include <iostream>
#include <fstream>
#include <climits>
#include <algorithm>
using namespace std;
ifstream fin("bomboane.in");
ofstream fout("bomboane.out");
int n, a[1001], rez[1001][3], sum, mini, maxi, imin, imax, ind;
int main()
{
    fin >> n;
    int i, j;
    for(i = 1; i <= n; i++)
        fin >> a[i], sum += a[i];
    if(sum%n) fout << - 1;
    else
    {
        sum /= n;
        int check = 1;
        while(check)
        {
            mini = INT_MAX;
            maxi = -INT_MAX;
            for(i = 1; i <= n; i++)
            {
                if(mini > a[i]) mini = a[i], imin = i;
                if(maxi < a[i]) maxi = a[i], imax = i;
            }
            if(mini == maxi) check = 0;
            else
            {
                rez[++ind][0] = imax;
                rez[ind][1] = imin;
                rez[ind][2] = sum - mini;
                a[imin] = sum;
                a[imax] = maxi - (sum - mini);
            }
        }
        fout << ind << '\n';
        for(i = 1; i <= ind; i++)
        {
            for(j = 0; j < 3; j++) fout << rez[i][j] << ' ';
            fout << '\n';
        }
    }
}