#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[102][102],s1=0,s2=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=n;j>=1;j--) cin>>a[i][j];
    for(int j=1;j<=n;j++)
        {for(int i=n;i>=1;i--) cout<<a[i][j]<<" ";
        cout<<endl;}
    return 0;
}