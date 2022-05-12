#include <fstream>
using namespace std;
ifstream fin("bucketsort.in");
ofstream fout("bucketsort.out");

int n,v[10001],d,i,semn;

int pozitie(int ls,int ld)
{
    int i=ls, j=ld, i0=0, j0=-1, aux;
    while(i<j)
    {
        if(v[i]*semn>v[j]*semn)
        {
            swap(v[i],v[j]);
            aux=i0;
            i0=-j0;
            j0=-aux;
        }
        i=i+i0;
        j=j+j0;
    }
    return i;
}
void quick(int ls,int ld)
{
    int p;
    if(ls<ld)
    {
        p=pozitie(ls,ld);
        quick(ls,p-1);
        quick(p+1,ld);
    }
}
int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
    fin>>d;
    if(d==0)
        semn=1;
    else
        semn=-1;
    quick(1,n);
    for(i=1;i<=n;i++)
        fout<<v[i]<<" ";
    fout.close();
    return 0;
}