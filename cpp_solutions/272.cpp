#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("paresort.in");
ofstream fout("paresort.out");

int main()
{
    int n, i, ind = 0, a[1001], p[1001], j;
    fin >> n;
    for(i = 1; i <= n; i++)
    {
        fin >> a[i];
        if(a[i] % 2 == 0)
        {
            p[ind] = a[i];
            ind++;
        }
    }

    //sort(p, p+ind);
    for(i = 1; i <= n; i++)
        for(j = i+1; j <= n; j++)
            if(p[i] > p[j])
                swap(p[i], p[j]);

    if(ind != 0)
        fout << ind << endl;
    for(i = 1; i <= ind; i++)
        fout << p[i] << " ";
    if(ind == 0)
        fout << "nu exista";
    fin.close();
    fout.close();
    return 0;
}