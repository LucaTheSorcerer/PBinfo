#include <fstream>
using namespace std;
ifstream fin("sort2.in");
ofstream fout("sort2.out");


int nrcif(int n)
{
    int cnt = 0;
    while(n)
    {
        cnt++;
        n /=10;
    }
    if(cnt <= 2)
        return 1;
    else
        return 0;
}
int main()
{
    int n, a[101], i, j, ok = 0;
    fin >> n;
    for(i = 1; i <= n; i++)
        fin >> a[i];

    for(i = 1; i <= n; i++)
        for(j = i + 1;  j <= n; j++)
            if(a[i] > a[j])
                swap(a[i],a[j]);

    for(i = 1; i <= n; i++)
    {
        if(nrcif(a[i]))
            fout << a[i] << " ";
            ok++;
    }

    if(ok == 0) fout << "NU EXISTA";
    return 0;

}