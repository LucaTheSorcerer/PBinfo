#include <fstream>
using namespace std;
ifstream fin("interclasare3.in");
ofstream fout("interclasare3.out");

int a[100001],b[100001],c[200003];
int n,m,i,j,k,s;

int main()
{   
    fin>>n>>m;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=1;i<=m;i++) fin>>b[i];
    i=1;    j=m;    k=0;
    while(i<=n && j>=1)
    {
        if(a[i]<b[j]) c[++k]=a[i++];
            else      c[++k]=b[j--];
    }
    while(i<=n)
        c[++k]=a[i++];
    while(j>=1)
        c[++k]=b[j--];
    s=0;
    for(i=1;i<=k;i++)
        if(c[i]%2==0)
        {
            s++;
            fout<<c[i]<<" ";
            if(s%20==0) fout<<"\n";
        }
    fout.close();
    return 0;
}
