#include <iostream>
using namespace std;

int n,i,j,a[1000001],b[100001],k;

void interclasare(int ls,int ld,int mij)
{
    int i,j,b[100001],k;
    i=ls;j=mij+1;k=0;
    while(i<=mij && j<=ld)
    {
        k++;
        if(a[i]<a[j])
          b[k]=a[i++];
        else
          b[k]=a[j++];
    }
    while(i<=mij)
        b[++k]=a[i++];
    while(j<=ld)
        b[++k]=a[j++];
    k=1;
    for(i=ls;i<=ld;i++)
        a[i]=b[k++];
}
void Merge(int ls,int ld)
{
    int mij;
    if(ls+1==ld||ls==ld)
    {
        if(a[ls]>a[ld])
           swap(a[ls],a[ld]);
    }
    else
    {
        mij=(ls+ld)/2;
        Merge(ls,mij);
        Merge(mij+1,ld);
        interclasare(ls,ld,mij);
    }
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    Merge(1,n);
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}