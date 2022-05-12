#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map <string, int> r;
int n, maxim;
int main()
{
	string s;
	while(cin >> s)
	{
		sort(s.begin(), s.end());
		r[s]++;
		if(r[s] > maxim) maxim = r[s];
	}
	cout << maxim;
	return 0;
}
