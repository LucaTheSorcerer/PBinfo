#include <iostream>
using namespace std;

int main()
{
	int n, m, i;
	cin >> n >> m;
	for(i = 1; i <= n * m; i++)
	{
		cout << (2*(i-1)+1)*(2*(i-1)+1) << " ";
		if(i%m==0) cout << endl;
	}
	return 0;
}
