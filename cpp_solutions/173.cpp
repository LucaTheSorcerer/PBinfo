#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    double medie;
    cin >> a >> b >> c;
    medie = (a + b + c)/3.;
    medie = (int)(medie*100)/100.;
    cout << fixed << setprecision(2) << medie;
    return 0;
}
    