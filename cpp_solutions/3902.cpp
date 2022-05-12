#include <fstream>
using namespace std;
ifstream fin("sortsum.in");
ofstream fout("sortsum.out");

int sum(int n)
{
    int s = 0;
    while(n)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}


int main()
{
    int n, a[1000001], i = 0, j = 0;
    fin >> n;
    for(i = 1; i <= n; i++)
        fin >> a[i];

    for(i = 1; i <= n; i++)
        for(j = i + 1;  j <= n; j++)
        {
            if(sum(a[i]) < sum(a[j]))
                fout << a[i] << ' ';
            if(sum(a[i]) == sum(a[
        }
}