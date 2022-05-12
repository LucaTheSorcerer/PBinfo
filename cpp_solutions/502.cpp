#include <iostream>
using namespace std;

int main()
{
    int n, a[501], i = 0, j = 0, sw = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];

    for(i = 1; i <= n; i++)
        for(j = i + 1; j <= n; j++)
            if(a[i]==a[j])
                sw = 1;

    if(sw == 0) cout << "DA";
    else cout << "NU";

}