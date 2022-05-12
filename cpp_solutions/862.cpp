#include <iostream>
using namespace std;

int n, t , k , v[100005], i, j, s;

int main() {
    cin >> n >> t >> k;
    for(int i = 1 ; i <= n ; i ++ ) cin >> v[i];
    for(int i =1 ; i <= n ; i ++)
        if(v[i] <= t)
        {
            j = i + 1;
            while(j <= n && v[j] <= t)  j ++;
            if(j-i >= k)
                s = s + j - i - k + 1;
            i = j;
        }
    cout << s;
    return 0;
}